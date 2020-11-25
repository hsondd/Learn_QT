#include "Client.h"

Client::Client(const QString host, int port) : QObject(), m_nextBlockSize(0)
{
    m_status = false;
    tcpSocket = new QTcpSocket();

    m_host = host;
    m_port = port;

    timeoutTimer = new QTimer();
    timeoutTimer->setSingleShot(true);
    connect(timeoutTimer, &QTimer::timeout, this, &Client::connectionTimeout);
    connect(tcpSocket, &QTcpSocket::disconnected, this, &Client::closeConnection);
}

void Client::connectToHost()
{
    timeoutTimer->start(3000);

    tcpSocket->connectToHost(m_host, m_port);
    connect(tcpSocket, &QTcpSocket::connected, this, &Client::connected);
    connect(tcpSocket, &QTcpSocket::readyRead, this, &Client::readyRead);
}

void Client::connectionTimeout()
{
    qDebug()  << tcpSocket->state();

    if (tcpSocket->state() == QAbstractSocket::ConnectingState)
    {
        tcpSocket->abort();
        emit tcpSocket->error(QAbstractSocket::SocketTimeoutError);
    }
}

void Client::connected()
{
    m_status = true;
    emit statusChanged(m_status);
}

bool Client::getStatus()
{
    return m_status;
}

void Client::readyRead()
{
    QDataStream in(tcpSocket);
    for(;;)
    {
        if (!m_nextBlockSize)
        {
            if (tcpSocket->bytesAvailable() < sizeof(quint16)) { break; }
            in >> m_nextBlockSize;
        }

        if (tcpSocket->bytesAvailable() < m_nextBlockSize) { break; }

        QString str;
        in >> str;

        if (str == "0")
        {
            str = "Connection closed";
            closeConnection();
        }
        emit hasReadSome(str);
        m_nextBlockSize = 0;
    }
}

void Client::closeConnection()
{
    timeoutTimer->stop();

    disconnect(tcpSocket, &QTcpSocket::connected, 0, 0);
    disconnect(tcpSocket, &QTcpSocket::readyRead, 0, 0);

    bool shouldEmit = false;
    switch (tcpSocket->state()) {
    case 0:
        tcpSocket->disconnectFromHost();
        shouldEmit = true;
        break;
    case 1:
        tcpSocket->abort();
        shouldEmit = true;
        break;
    default:
        tcpSocket->abort();
        break;
    }

    if (shouldEmit)
    {
        m_status = false;
        emit statusChanged(m_status);
    }
}

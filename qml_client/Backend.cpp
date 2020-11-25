#include "Backend.h"

Backend::Backend(QObject *parent) : QObject(parent)
{
    m_pClient = new Client("localhost", 1997);

    connect(m_pClient, &Client::hasReadSome, this, &Backend::receivedSomething);
    connect(m_pClient, &Client::statusChanged, this, &Backend::setStatus);
    connect(m_pClient->tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(gotError(QAbstractSocket::SocketError)));
}

bool Backend::getStatus()
{
    return m_pClient->getStatus();
}

void Backend::setStatus(bool newStatus)
{
    qDebug() << "new status is: " << newStatus;
    if (newStatus)
    {
        emit statusChanged("CONNECTED");
    }
    else
    {
        emit statusChanged("DISCONNECTED");
    }
}

void Backend::receivedSomething(QString mess)
{
    emit someMessage(mess);
}

void Backend::gotError(QAbstractSocket::SocketError err)
{
    qDebug() << "got error";

    QString strError = "unknown";
    switch (err) {
    case 0:
        strError = "Connection was refused";
        break;
    case 1:
        strError = "Remote host closed the connection";
        break;
    case 2:
        strError = "Host address not found";
        break;
    case 3:
        strError = "Connection timed out";
        break;
    default:
        strError = "Unknown error";
        break;
    }
    emit someError(strError);
}

void Backend::connectClicked()
{
    m_pClient->connectToHost();
}

void Backend::sendClicked(QString mess)
{
    QByteArray arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);
    out << quint16(0) << mess;

    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));

    m_pClient->tcpSocket->write(arrBlock);
}

void Backend::disconnectClicked()
{
    m_pClient->closeConnection();
}

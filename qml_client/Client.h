#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QTcpSocket>
#include <QDataStream>
#include <QTimer>

class Client : public QObject
{
    Q_OBJECT
public:
    Client(const QString host, int port);

    QTcpSocket *tcpSocket;
    bool getStatus();

public slots:
    void closeConnection();
    void connectToHost();

signals:
    void statusChanged(bool status);
    void hasReadSome(QString msg);

private slots:
    void readyRead();
    void connected();
    void connectionTimeout();

private:
    QString m_host;
    int m_port;
    bool m_status;
    quint16 m_nextBlockSize;
    QTimer *timeoutTimer;
};

#endif // CLIENT_H

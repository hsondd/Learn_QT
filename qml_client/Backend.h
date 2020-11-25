#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include "Client.h"

class Backend : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool currentStatus READ getStatus NOTIFY statusChanged)
public:
    explicit Backend(QObject *parent = nullptr);
    bool getStatus();

signals:
    void statusChanged(QString newStatus);
    void someError(QString error);
    void someMessage(QString mess);

public slots:
    void setStatus(bool newStatus);
    void receivedSomething(QString mess);
    void gotError(QAbstractSocket::SocketError err);
    void sendClicked(QString mess);
    void connectClicked();
    void disconnectClicked();

private:
    Client *m_pClient;
};

#endif // BACKEND_H

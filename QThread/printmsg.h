#ifndef PRINTMSG_H
#define PRINTMSG_H

#include <QThread>

class printMsg : public QThread
{
    Q_OBJECT
public:
    explicit printMsg(QObject *parent = 0);
    void stop();

signals:

public slots:

protected:
    void run();
 private:
    bool isStop;

};

#endif // PRINTMSG_H

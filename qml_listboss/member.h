#ifndef MEMBER_H
#define MEMBER_H
#include <QObject>
#include <QDebug>

class Member : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString memberName READ memberName WRITE setMemberName NOTIFY memberNameChanged)
    Q_PROPERTY(int memberAge READ memberAge WRITE setMemberAge NOTIFY memberAgeChanged)
public:
    explicit Member(QString memberName, int memberAge, QObject *parent = nullptr);

    QString memberName() const;
    void setMemberName(QString memberName);

    int memberAge() const;
    void setMemberAge(int memberAge);
private:
    QString m_memberName;
    int m_memberAge;
signals:
    void memberNameChanged(QString memberName);
    void memberAgeChanged(int memberAge);
};

#endif // MEMBER_H

#include "member.h"

Member::Member(QString memberName, int memberAge, QObject *parent) : QObject(parent), m_memberName(memberName), m_memberAge(memberAge)
{

}

QString Member::memberName() const
{
    qDebug() << "getter: memberName" << m_memberName;
    return m_memberName;
}

void Member::setMemberName(QString memberName)
{
    qDebug() << "setter: setNumbeName" << memberName;
    if (m_memberName == memberName)
        return;
    m_memberName = memberName;
    emit memberNameChanged(m_memberName);
}

int Member::memberAge() const
{
    return m_memberAge;
}

void Member::setMemberAge(int memberAge)
{
    qDebug() << "setter: setMemberAge: " << memberAge;
    if (m_memberAge == memberAge)
        return;
    m_memberAge = memberAge;
    emit memberAgeChanged(m_memberAge);
}

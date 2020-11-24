#include "listboss.h"

ListBoss::ListBoss(QObject *parent) : QAbstractListModel(parent)
{
    m_listBoss.append(new Member("HungND49", 23));
    m_listBoss.append(new Member("TuanDA30",21));
    m_listBoss.append(new Member("DinhNH2", 22));
    m_listBoss.append(new Member("CuongNT30", 20));
    m_listBoss.append(new Member("DatNT96", 20));
    m_listBoss.append(new Member("MinhNN24", 24));
    m_listBoss.append(new Member("ThiTV", 25));
    m_listBoss.append(new Member("DaiCQ", 26));
    m_listBoss.append(new Member("QuanNL3", 30));
    m_listBoss.append(new Member("VanNC", 27));
    m_listBoss.append(new Member("TuaNA10", 23));
}

int ListBoss::rowCount(const QModelIndex &parent) const
{
    return m_listBoss.length();
}

QVariant ListBoss::data(const QModelIndex &index, int role) const
{
    if (index.row() >= m_listBoss.length() || index.row() < 0)
    {
        qDebug() << "Err: " << m_listBoss.length() << index.row();
        return QVariant();
    }

    Member *mem = static_cast<Member*>(m_listBoss[index.row()]);

    switch (role) {
        case nameRole:
            return mem->memberName();
        case ageRole:
            return mem->memberAge();
        default:
            qDebug() << "unknown";
    }
    return QVariant();
}

QHash<int,QByteArray> ListBoss::roleNames() const
{
    QHash<int,QByteArray> roles;

    roles[nameRole] = "memberName";
    roles[ageRole] = "memberAge";

    return roles;
}

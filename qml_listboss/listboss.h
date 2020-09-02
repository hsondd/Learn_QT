#ifndef LISTBOSS_H
#define LISTBOSS_H

#include <QObject>
#include <QAbstractListModel>

#include "member.h"

class ListBoss : public QAbstractListModel
{
    Q_OBJECT
public:
    enum bossRoles {
        nameRole = Qt::UserRole + 1,
        ageRole
    };
    explicit ListBoss(QObject *parrent = Q_NULLPTR);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
protected:
    QHash<int,QByteArray> roleNames() const;
private:
    QList<QObject*> m_listBoss;
};

#endif // LISTBOSS_H

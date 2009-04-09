#ifndef EVENTMODEL_H
#define EVENTMODEL_H

#include <QAbstractItemModel>
#include <QVariant>
#include "events.h"
#include "treeitem.h"

class TreeItem;

class EventModel : public QAbstractItemModel
{
    Q_OBJECT

public:
    EventModel(QVector<Events> eventVector, QObject *parent=0);
    ~EventModel();
    int rowCount(const QModelIndex &parent=QModelIndex()) const;
    int columnCount(const QModelIndex & parent = QModelIndex()) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    QVariant data(const QModelIndex &index, int role) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;

private:
    TreeItem *rootItem;

protected:
    QModelIndex index(int row, int col, const QModelIndex &parent=QModelIndex()) const;
    QModelIndex parent(const QModelIndex &index) const;
};

#endif // EVENTMODEL_H

#include "eventmodel.h"

EventModel::EventModel(QVector<Events> eventVector, QObject *parent):QAbstractItemModel(parent)
{
    QList<QVariant> rootData;
    rootData << "Events"
             << "Desc"
             << "Id"
             << "Trigger"
             << "Time"
             << "Op1"
             << "Op2"
             << "Op3"
             << "Op4"
             << "Op5"
             << "Op6";
    rootItem = new TreeItem(rootData);
    QList<TreeItem*> parents;
    parents << rootItem;
    for(qint32 i = 0; i < eventVector.size();++i)
    {
        QList<QVariant> dat;
        dat << eventVector[i].filenameToString();
        rootItem->appendChild(new TreeItem(dat, rootItem));
        for(qint32 j = 0; j < eventVector[i].size; ++j)
        {
            QList<QVariant> columnData;
            columnData << eventVector.at(i).titleToString().at(j)
                    << eventVector[i].descToString().at(j)
                    << eventVector[i].idToString().at(j)
                    << eventVector[i].triggerToString().at(j)
                    << eventVector[i].timeToString().at(j)
                    << eventVector[i].option1ToString().at(j)
                    << eventVector[i].option2ToString().at(j)
                    << eventVector[i].option3ToString().at(j)
                    << eventVector[i].option4ToString().at(j)
                    << eventVector[i].option5ToString().at(j)
                    << eventVector[i].option6ToString().at(j);
            if(rootItem->childCount() > 0)
            {
                rootItem->child(rootItem->childCount()-1)->appendChild(new TreeItem(columnData, rootItem->child(rootItem->childCount()-1)));
            } else
            {
                rootItem->child(rootItem->childCount())->appendChild(new TreeItem(columnData, rootItem->child(rootItem->childCount())));
            }
        }
    }
}
int EventModel::rowCount(const QModelIndex &parent) const
{
    TreeItem *parentItem;
    if(parent.column() > 0)
        return 0;
    if(!parent.isValid())
        parentItem = rootItem;
    else
        parentItem=static_cast<TreeItem*>(parent.internalPointer());
    return parentItem->childCount();
}
int EventModel::columnCount(const QModelIndex & parent) const
{
     if (parent.isValid())
         return static_cast<TreeItem*>(parent.internalPointer())->columnCount();
     else
         return rootItem->columnCount();
}
QVariant EventModel::headerData(int section, Qt::Orientation orientation, int role) const
{
     if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
         return rootItem->data(section);

     return QVariant();
}
QVariant EventModel::data(const QModelIndex & index, int role) const
{
     if (!index.isValid())
         return QVariant();

     if (role != Qt::DisplayRole)
         return QVariant();

     TreeItem *item = static_cast<TreeItem*>(index.internalPointer());

     return item->data(index.column());
}
QModelIndex EventModel::index(int row, int col, const QModelIndex &parent) const
{
     if (!hasIndex(row, col, parent))
         return QModelIndex();

     TreeItem *parentItem;

     if (!parent.isValid())
         parentItem = rootItem;
     else
         parentItem = static_cast<TreeItem*>(parent.internalPointer());

     TreeItem *childItem = parentItem->child(row);
     if (childItem)
         return createIndex(row, col, childItem);
     else
         return QModelIndex();
}
 Qt::ItemFlags EventModel::flags(const QModelIndex &index) const
 {
     if (!index.isValid())
         return 0;

     return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
 }
QModelIndex EventModel::parent(const QModelIndex &index) const
{
     if (!index.isValid())
         return QModelIndex();

     TreeItem *childItem = static_cast<TreeItem*>(index.internalPointer());
     TreeItem *parentItem = childItem->parent();

     if (parentItem == rootItem)
         return QModelIndex();

     return createIndex(parentItem->row(), 0, parentItem);
}
EventModel::~EventModel()
{
    delete rootItem;
}

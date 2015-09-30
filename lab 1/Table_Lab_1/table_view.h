#ifndef TableViewLab_H
#define TableViewLab_H

#include <QMainWindow>
#include <QWidget>
#include <QVariant>
#include <QAbstractTableModel>
#include <QStringList>
#include "table_main_window.h"

using namespace Qt;

class TableViewLab : public QAbstractTableModel
{
public:
	TableViewLab(int rows = 3, int columns = 2, QObject *parent = 0);

	bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
	bool insertRows(int position, int rows, const QModelIndex &parent = QModelIndex());
	bool removeRows(int position, int rows, const QModelIndex &parent = QModelIndex());
	int  rowCount(const QModelIndex &parent = QModelIndex())									const;
	int  columnCount(const QModelIndex &parent = QModelIndex())									const;
	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole)	const;
	ItemFlags flags(const QModelIndex &index)													const;
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole)							const;
private:
	QList<QStringList> m_rowList;
};

#endif // TableViewLab_H

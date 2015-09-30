#include <QtGui>
#include "table_view.h"


int TableViewLab::rowCount(const QModelIndex &parent) const
{
	return m_rowList.size();
}
int TableViewLab::columnCount(const QModelIndex &parent) const
{
	return m_rowList[0].size();
}

QVariant TableViewLab::headerData(int section, Qt::Orientation orientation, int role) const
{
	if (role != Qt::DisplayRole)
	{ 
		return QVariant();
	}
	if (orientation == Qt::Horizontal)
	{
		if (section == 0)
		{
			return QString("Country Name");
		}
		else if (section == 1)
		{
			return QString("Population(in millions)");
		}
		else
		{ 
			return QString("Column %1").arg(section);
		}
	}
	else
		return QString("%1").arg(section);
}

ItemFlags TableViewLab::flags(const QModelIndex &index) const
{

		if (!index.isValid())
		{
			return ItemIsEnabled;
		}
		return  QAbstractItemModel::flags(index) | ItemIsEnabled | ItemIsEditable;
}

QVariant TableViewLab::data(const QModelIndex &index, int role) const
{
	if (!index.isValid())
	{
		return QVariant();
	}
	if (index.row() >= m_rowList.size())
	{ 
		return QVariant();
	}
	if (role == Qt::DisplayRole || role == Qt::EditRole)
	{
		return m_rowList[index.row()][index.column()];
	}
	else
	{
		return QVariant();
	}
}

TableViewLab::TableViewLab(int rows, int columns, QObject *parent) : QAbstractTableModel(parent)
{
	QStringList newList;
	newList.append("Russia");
	newList.append("146");
	m_rowList.append(newList);
	newList.clear();
	newList.append("Austria");
	newList.append("8");
	m_rowList.append(newList);
	newList.clear();
	newList.append("Dania");
	newList.append("5");
	m_rowList.append(newList);
}

bool TableViewLab::setData(const QModelIndex &index, const QVariant &value, int role)
{
	if (!index.isValid() || role != Qt::EditRole)
	{
		return false;
	}
	m_rowList[index.row()][index.column()] = value.toString();
	emit dataChanged(index, index);
	return true;
}

bool TableViewLab::insertRows(int position, int rows, const QModelIndex &parent)
{
	int columns = columnCount();
	beginInsertRows(parent, position, position + rows - 1);
	for (int row = 0; row < rows; ++row)
	{
		QStringList items;
		for (int column = 0; column < columns; ++column)
		{
			items.append("");
		}
		m_rowList.insert(position, items);
	}
	endInsertRows();
	return true;
}

bool TableViewLab::removeRows(int position, int rows, const QModelIndex &parent)
{
	beginRemoveRows(parent, position, position + rows - 1);
	for (int row = 0; row < rows; ++row)
	{
		m_rowList.removeAt(position);
	}
	endRemoveRows();
	return true;
}

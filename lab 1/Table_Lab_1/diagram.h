#ifndef DIAGRAM_H
#define DIAGRAM_H

#include <QWidget>
#include <QtWidgets>
#include <QTableView>
#include "pieview.h"
#include "table_view.h"
#include "ui_diagram.h"

class QAbstractItemModel;
class QAbstractItemView;
class QItemSelectionModel;
class TableViewLab;

class Diagram : public QWidget
{
	Q_OBJECT

public:
	Diagram(QWidget *parent, TableViewLab *tableMyView, QTableView *tableView);
	~Diagram();

private:
	Ui::Diagram ui;
	/////////////////////////////
	QAbstractItemModel *model;
	QAbstractItemView *pieChart;
	QItemSelectionModel *selectionModel;
	/////////////////////////////
	void SetModelDataFromTableModel(QAbstractItemModel *model, QTableView *tableView);
};

#endif // DIAGRAM_H

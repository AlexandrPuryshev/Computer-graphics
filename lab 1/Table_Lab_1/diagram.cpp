#include "diagram.h"
#include <QGridLayout>

Diagram::Diagram(QWidget *parent, TableViewLab *tableMyVie, QTableView *tableView)
	: QWidget(parent)
{
	model = new QStandardItemModel(tableMyVie->rowCount(), tableMyVie->columnCount(), this);
	QSplitter *splitter = new QSplitter;
	QTableView *table = new QTableView;
	QGridLayout *layout = new QGridLayout(this);;
	pieChart = new PieView;

	splitter->addWidget(table);
	splitter->addWidget(pieChart);

	splitter->setStretchFactor(0, 0);
	splitter->setStretchFactor(1, 1);

	table->setModel(model);
	pieChart->setModel(model);

	QItemSelectionModel *selectionModel = new QItemSelectionModel(model);
	table->setSelectionModel(selectionModel);
	pieChart->setSelectionModel(selectionModel);

	QHeaderView *headerView = table->horizontalHeader();
	headerView->setStretchLastSection(true);

	layout->addWidget(splitter, 0, 0);
	SetModelDataFromTableModel(model, tableView);
    ui.setupUi(this);
}

Diagram::~Diagram()
{

}

void Diagram::SetModelDataFromTableModel(QAbstractItemModel *model, QTableView *tableView)
{
	for (int r = 0; r < tableView->verticalHeader()->count(); ++r)
	{
		model->setData(model->index(r, 0, QModelIndex()), tableView->model()->data(tableView->model()->index(r, 0), Qt::DisplayRole).toString());
		for (int c = 0; c < tableView->horizontalHeader()->count(); ++c)
		{
			model->setData(model->index(r, 1, QModelIndex()), tableView->model()->data(tableView->model()->index(r, c), Qt::DisplayRole).toString());
		}
	}
}

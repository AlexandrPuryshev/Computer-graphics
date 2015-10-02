#include "table_main_window.h"
#include "ui_table_main_window.h"

Table_Main_Window::Table_Main_Window(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::Table_Main_Window)
{
	tableMyView = new TableViewLab();

	ui->setupUi(this);

	//header
	///////////////////////////////////////
	ui->tableView->setModel(tableMyView);
	ui->tableView->setColumnWidth(0, 200);
	ui->tableView->setColumnWidth(1, 200);
	//menu bar
	connect(ui->actionAbout_me, SIGNAL(triggered()), this, SLOT(about()));
	connect(ui->actionNew_Table, SIGNAL(triggered()), this, SLOT(newTable()));
	connect(ui->actionDiagram, SIGNAL(triggered()), this, SLOT(viewDiagram()));
	//hotkey
	ui->menu->addAction("&Open", this, SLOT(open()), QKeySequence::Open);
	ui->menu->addAction("&Save", this, SLOT(save()), QKeySequence::Save);
	ui->menu->addAction("&Save As...", this, SLOT(save_as()), QKeySequence::SaveAs); // баллы??
}

void Table_Main_Window::WriteInFile(QFile &f)
{
	if (f.open(QIODevice::WriteOnly))
	{
		QTextStream ts(&f);
		QStringList strList;
		strList << "" "";

		for (int c = 0; c < ui->tableView->horizontalHeader()->count(); ++c)
			strList << ui->tableView->model()->headerData(c, Qt::Horizontal).toString();
		ts << strList.join(";") + "\n";

		for (int r = 0; r < ui->tableView->verticalHeader()->count(); ++r)
		{
			strList.clear();
			strList << ui->tableView->model()->headerData(r, Qt::Vertical).toString();
			for (int c = 0; c < ui->tableView->horizontalHeader()->count(); ++c)
			{
				strList << ui->tableView->model()->data(ui->tableView->model()->index(r, c), Qt::DisplayRole).toString();
			}
			ts << strList.join(";") + "\n";
		}
		f.close();
	}
	else
	{
		QMessageBox::critical(this, tr("Error"),
			tr("File doesn't open!"));
	}
}

void Table_Main_Window::addButtonSlot()
{
	tableMyView->insertRows(tableMyView->rowCount(), 1);
}

void Table_Main_Window::deleteButtonSlot()
{
	tableMyView->removeRows(tableMyView->rowCount() - 1, 1);
}

void Table_Main_Window::viewDiagram()
{
	Diagram *diag = new Diagram(0, tableMyView, ui->tableView);
	diag->setWindowModality(WindowModal); // освобождение
	diag->show();
}

//готово
void Table_Main_Window::newTable()
{
	int countRow = tableMyView->rowCount() - 1;
	for (int count = 0; count < countRow; count++)
	{
		tableMyView->removeRows(tableMyView->rowCount() - 1, 1);
	}
	tableMyView->setData(tableMyView->index(0, 0), "");
	tableMyView->setData(tableMyView->index(0, 1), "");
	QFile iniFile("Ini_Save.ini");
	if (iniFile.open(QIODevice::WriteOnly))
	{
		QString line;
		QTextStream FileIn(&iniFile);
		line.push_back("currentFile =");
		FileIn << line;
		iniFile.close();
	}
}

//готово
void Table_Main_Window::open()
{
	//QFileDialog::getOpenFileName(this, tr("Open Document"), QDir::currentPath(), tr("JSON files (*.json);;All files (*.*)"), 0, QFileDialog::DontUseNativeDialog);
	QString filename = QFileDialog::getOpenFileName(
		this,
		tr("Open Document"),
		QDir::currentPath(),
		tr("CSV files (*.csv);;All files (*.*)"));
	if (!filename.isNull())
	{
		QFile iniFile("Ini_Save.ini");
		if (iniFile.open(QIODevice::WriteOnly))
		{
			QString line;
			QTextStream FileIn(&iniFile);
			line.push_back("currentFile =");
			line.push_back(filename);
			FileIn << line;
			iniFile.close();
		}
		else
		{
			QMessageBox::critical(this, tr("Error"),
				tr("File doesn't open!"));
		}
		qDebug(filename.toUtf8());
		QFile file(filename);
		if (file.open(QIODevice::ReadOnly | QIODevice::Text))
		{
			int countRow = 0;
			int countRowInTable = tableMyView->rowCount();
			QString line = file.readLine();
			//можно и в отдельную функцию...
			while (!file.atEnd())
			{
				if (countRow == countRowInTable || countRow > countRowInTable)
				{
					tableMyView->insertRows(countRow, 1);
				}
				line = file.readLine();
				int index1 = line.indexOf(QRegExp(";"), 0);
				int index2 = line.indexOf(QRegExp(";"), 2);
				//так как статистика можно и так)
				int LenCountry = index2 - index1;
				int lenPopulation = line.length() - index2;
				tableMyView->setData(tableMyView->index(countRow, 0), line.mid(index1 + 1, LenCountry - 1));
				tableMyView->setData(tableMyView->index(countRow, 1), line.mid(index2 + 1, lenPopulation - 1));
				countRow++;
				statusBar()->showMessage(tr("Loaded %1").arg(filename), 2000);
			}
			if (countRow < countRowInTable)
			{
				for (int count = 0; count < countRowInTable - countRow; count++)
				{
					tableMyView->removeRows(tableMyView->rowCount() - 1, 1);
				}
			}
		}
	}
}

//готово
void Table_Main_Window::save()
{
	QFile iniFile("Ini_Save.ini");
	if (iniFile.open(QIODevice::ReadWrite))
	{
		QTextStream FileIn(&iniFile);
		QString line = FileIn.readLine();
		int indexLen = line.indexOf(QRegExp("="), 0);
		int neededLen = line.length() - indexLen;
		if (neededLen < 2)
		{
			if (line.isEmpty())
			{
				FileIn << "currentFile =";
			}
			QString filename = QFileDialog::getSaveFileName(
				this,
				tr("Save Document"),
				QDir::currentPath(),
				tr("CSV File (*.csv)"));
			if (!filename.isNull())
			{
				FileIn << filename;
				qDebug(filename.toUtf8());
				QFile f(filename);
				WriteInFile(f);
			}
		}
		else
		{
			line.remove(0, indexLen + 1);
			QFile f(line);
			WriteInFile(f);
		}
		iniFile.close();
	}
	else
	{
		QMessageBox::critical(this, tr("Error"),
			tr("File doesn't open!"));
	}
}

//готово
void Table_Main_Window::save_as()
{
	QFile iniFile("Ini_Save.ini");
	if (iniFile.open(QIODevice::ReadWrite))
	{
		QTextStream FileIn(&iniFile);
		QString line = FileIn.readLine();
		if (line.isEmpty())
		{
			FileIn << "currentFile =";
		}
		int indexLen = line.indexOf(QRegExp("="), 0);
		int neededLen = line.length() - indexLen;
		QString filename = QFileDialog::getSaveFileName(
			this,
			tr("Save Document"),
			QDir::currentPath(),
			tr("CSV File (*.csv)"));
		if (!filename.isNull())
		{
			if (neededLen < 2)
			{
				FileIn << filename;
			}
			else
			{
				iniFile.close();
				iniFile.open(QIODevice::WriteOnly);
				line.clear();
				line.push_back("currentFile =");
				line.push_back(filename);
				FileIn << line;
			}
			qDebug(filename.toUtf8());
			QFile f(filename);
			WriteInFile(f);
		}
		iniFile.close();
	}
	else
	{
		QMessageBox::critical(this, tr("Error"),
			tr("File doesn't open!"));
	}
}

//готово
void Table_Main_Window::about()
{
	QSurfaceFormat fmt;
	fmt.setSamples(4);
	QSurfaceFormat::setDefaultFormat(fmt);
	About_Window *native_2 = new About_Window(); // а также здесь?
	native_2->setWindowModality(WindowModal);
	native_2->show();
}

Table_Main_Window::~Table_Main_Window()
{
	delete ui;
}
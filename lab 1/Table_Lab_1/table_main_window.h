#ifndef TABLE_MAIN_WINDOW_H
#define TABLE_MAIN_WINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QString>
#include <QTextEdit>
#include "table_view.h"

class TableViewLab;

namespace Ui {
	class Table_Main_Window;
}

class Table_Main_Window : public QMainWindow
{
	Q_OBJECT

public:
	explicit Table_Main_Window(QWidget *parent = 0);
	bool doubleClickedIsChecked;
	~Table_Main_Window();


private:
	Ui::Table_Main_Window *ui;
	TableViewLab *tableMyView;
private slots:
	void addButtonSlot();
	void deleteButtonSlot();
/////////////////////////////
	void newTable();
	void open();
	void save();
	void save_as();
	void about();
////////////////////////////
	void WriteInFile(QFile &f);
};

#endif // TABLE_MAIN_WINDOW_H

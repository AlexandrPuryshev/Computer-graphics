#include "table_main_window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Table_Main_Window w;
	w.show();
	return a.exec();
}
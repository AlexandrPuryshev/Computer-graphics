/********************************************************************************
** Form generated from reading UI file 'table_main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_MAIN_WINDOW_H
#define UI_TABLE_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Table_Main_Window
{
public:
    QAction *actionNew_Table;
    QAction *actionSave;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionTable;
    QAction *actionDiagram;
    QAction *actionInsert_Row;
    QAction *actionDelete_Row;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuView;
    QMenu *menuInsert;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Table_Main_Window)
    {
        if (Table_Main_Window->objectName().isEmpty())
            Table_Main_Window->setObjectName(QStringLiteral("Table_Main_Window"));
        Table_Main_Window->resize(590, 517);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Table_Main_Window->sizePolicy().hasHeightForWidth());
        Table_Main_Window->setSizePolicy(sizePolicy);
        Table_Main_Window->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        actionNew_Table = new QAction(Table_Main_Window);
        actionNew_Table->setObjectName(QStringLiteral("actionNew_Table"));
        actionSave = new QAction(Table_Main_Window);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionOpen = new QAction(Table_Main_Window);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave_as = new QAction(Table_Main_Window);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionTable = new QAction(Table_Main_Window);
        actionTable->setObjectName(QStringLiteral("actionTable"));
        actionDiagram = new QAction(Table_Main_Window);
        actionDiagram->setObjectName(QStringLiteral("actionDiagram"));
        actionInsert_Row = new QAction(Table_Main_Window);
        actionInsert_Row->setObjectName(QStringLiteral("actionInsert_Row"));
        actionDelete_Row = new QAction(Table_Main_Window);
        actionDelete_Row->setObjectName(QStringLiteral("actionDelete_Row"));
        centralWidget = new QWidget(Table_Main_Window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 20, 521, 441));
        Table_Main_Window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Table_Main_Window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 590, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuInsert = new QMenu(menuBar);
        menuInsert->setObjectName(QStringLiteral("menuInsert"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        Table_Main_Window->setMenuBar(menuBar);
        statusBar = new QStatusBar(Table_Main_Window);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Table_Main_Window->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuInsert->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menu->addAction(actionNew_Table);
        menu->addAction(actionSave);
        menu->addAction(actionOpen);
        menu->addAction(actionSave_as);
        menuView->addAction(actionTable);
        menuView->addAction(actionDiagram);
        menuInsert->addAction(actionInsert_Row);
        menuInsert->addAction(actionDelete_Row);

        retranslateUi(Table_Main_Window);

        QMetaObject::connectSlotsByName(Table_Main_Window);
    } // setupUi

    void retranslateUi(QMainWindow *Table_Main_Window)
    {
        Table_Main_Window->setWindowTitle(QApplication::translate("Table_Main_Window", "Table_Main_Window", 0));
        actionNew_Table->setText(QApplication::translate("Table_Main_Window", "New Table", 0));
        actionSave->setText(QApplication::translate("Table_Main_Window", "Save", 0));
        actionOpen->setText(QApplication::translate("Table_Main_Window", "Open", 0));
        actionSave_as->setText(QApplication::translate("Table_Main_Window", "Save As...", 0));
        actionTable->setText(QApplication::translate("Table_Main_Window", "Table", 0));
        actionDiagram->setText(QApplication::translate("Table_Main_Window", "Diagram", 0));
        actionInsert_Row->setText(QApplication::translate("Table_Main_Window", "Insert Row", 0));
        actionDelete_Row->setText(QApplication::translate("Table_Main_Window", "Delete Row", 0));
        menu->setTitle(QApplication::translate("Table_Main_Window", "File", 0));
        menuView->setTitle(QApplication::translate("Table_Main_Window", "View", 0));
        menuInsert->setTitle(QApplication::translate("Table_Main_Window", "Insert", 0));
        menuAbout->setTitle(QApplication::translate("Table_Main_Window", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class Table_Main_Window: public Ui_Table_Main_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_MAIN_WINDOW_H

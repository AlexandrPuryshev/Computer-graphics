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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QAction *actionAbout_me;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *DeleteButton;
    QPushButton *AddButton;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuView;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Table_Main_Window)
    {
        if (Table_Main_Window->objectName().isEmpty())
            Table_Main_Window->setObjectName(QStringLiteral("Table_Main_Window"));
        Table_Main_Window->resize(600, 500);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Table_Main_Window->sizePolicy().hasHeightForWidth());
        Table_Main_Window->setSizePolicy(sizePolicy);
        Table_Main_Window->setMinimumSize(QSize(600, 500));
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
        actionAbout_me = new QAction(Table_Main_Window);
        actionAbout_me->setObjectName(QStringLiteral("actionAbout_me"));
        centralWidget = new QWidget(Table_Main_Window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        DeleteButton = new QPushButton(centralWidget);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setMouseTracking(false);

        gridLayout->addWidget(DeleteButton, 2, 0, 1, 1);

        AddButton = new QPushButton(centralWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(AddButton, 1, 0, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setContextMenuPolicy(Qt::DefaultContextMenu);
        tableView->setLayoutDirection(Qt::LeftToRight);
        tableView->setFrameShape(QFrame::StyledPanel);
        tableView->setFrameShadow(QFrame::Plain);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setDefaultSectionSize(106);
        tableView->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        Table_Main_Window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Table_Main_Window);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 19));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        Table_Main_Window->setMenuBar(menuBar);
        statusBar = new QStatusBar(Table_Main_Window);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Table_Main_Window->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menu->addAction(actionNew_Table);
        menuView->addAction(actionTable);
        menuView->addAction(actionDiagram);
        menuAbout->addAction(actionAbout_me);

        retranslateUi(Table_Main_Window);
        QObject::connect(AddButton, SIGNAL(pressed()), Table_Main_Window, SLOT(addButtonSlot()));
        QObject::connect(DeleteButton, SIGNAL(pressed()), Table_Main_Window, SLOT(deleteButtonSlot()));

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
        actionAbout_me->setText(QApplication::translate("Table_Main_Window", "about me", 0));
        DeleteButton->setText(QApplication::translate("Table_Main_Window", "Delete", 0));
        AddButton->setText(QApplication::translate("Table_Main_Window", "Add", 0));
        menu->setTitle(QApplication::translate("Table_Main_Window", "File", 0));
        menuView->setTitle(QApplication::translate("Table_Main_Window", "View", 0));
        menuAbout->setTitle(QApplication::translate("Table_Main_Window", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class Table_Main_Window: public Ui_Table_Main_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_MAIN_WINDOW_H

#-------------------------------------------------
#
# Project created by QtCreator 2015-09-11T10:00:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Table_Lab_1
TEMPLATE = app


SOURCES += 	main.cpp\
        	table_main_window.cpp \
    		table_view.cpp \
                about_me.cpp \
                Helper.cpp \
                diagram.cpp \
                pieview.cpp \
                about_window.cpp


HEADERS  +=     table_main_window.h \
                table_view.h \
                about_me.h \
                Helper.h \
                diagram.h \
                pieview.h \
                about_window.h
		 

FORMS    += table_main_window.ui \
            about_me.ui \
            diagram.ui

RESOURCES += image.qrc


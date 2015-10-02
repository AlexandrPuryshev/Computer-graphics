#ifndef ABOUT_WINDOW_H
#define ABOUT_WINDOW_H

#include "helper.h"


#include <QWidget>

class About_Window : public QWidget
{
	Q_OBJECT

public:
	About_Window();
	~About_Window();

private:
	Helper helper;
};

#endif // ABOUT_WINDOW_H

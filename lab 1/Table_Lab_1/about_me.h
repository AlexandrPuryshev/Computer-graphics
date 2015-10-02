#ifndef ABOUT_ME_H
#define ABOUT_ME_H

#include <QWidget>
#include "Helper.h"
#include "ui_about_me.h"

class Helper;

class About_ME : public QWidget
{
	Q_OBJECT

public:
	About_ME(Helper *helper, QWidget *parent);
	~About_ME();

public slots:
	void animate();

protected:
	void paintEvent(QPaintEvent *event);

private:
	Ui::About_ME ui;
	Helper *helper;
	int count;
	bool flag_switch;
};

#endif // ABOUT_ME_H

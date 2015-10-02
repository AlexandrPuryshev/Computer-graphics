#include "about_me.h"

#include <QPainter>
#include <QTimer>

const int PARAM_DOWN = 520;
const int PARAM_UP = 300;

About_ME::About_ME(Helper *helper, QWidget *parent)
	: QWidget(parent), helper(helper)
{
	flag_switch = false;
	count = 1;
	setFixedSize(600, 600);
}

About_ME::~About_ME()
{

}

void About_ME::animate()
{
	if (count > PARAM_DOWN)
	{
		flag_switch = true;
	}
	if (count < PARAM_DOWN && !flag_switch)
	{
		count = count + 10;
	}
	if (count < PARAM_UP && flag_switch)
	{
		count = count + 14;
		flag_switch = false;
	}
	if (count > PARAM_UP && flag_switch)
	{
		count = count - 12;
	}
	update();
}

void About_ME::paintEvent(QPaintEvent *event)
{
	QPainter painter;
	painter.begin(this);
	painter.setRenderHint(QPainter::Antialiasing);
	helper->paint(&painter, event, count);
	painter.end();
}

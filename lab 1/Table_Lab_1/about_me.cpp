#include "about_me.h"

#include <QPainter>
#include <QTimer>

const int PARAM_DOWN = 520;
const int PARAM_UP = 300;

About_ME::About_ME(Helper *helper, QWidget *parent)
	: QWidget(parent), helper(helper)
{
	elapsed = 0;
	setFixedSize(600, 600);
}

About_ME::~About_ME()
{
	delete helper;
}

void About_ME::animate()
{
	elapsed = (elapsed + qobject_cast<QTimer*>(sender())->interval()) % 1000;
	update();
}

void About_ME::paintEvent(QPaintEvent *event)
{
	QPainter painter;
	painter.begin(this);
	painter.setRenderHint(QPainter::Antialiasing);
	helper->paint(&painter, event, elapsed);
	painter.end();
}

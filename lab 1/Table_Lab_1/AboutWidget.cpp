#include "AboutWidget.h"
#include <QTimer>

AboutWidget::AboutWidget(Helper *helper, QWidget *parent)
	: QWidget(parent), helper(helper)
{
	elapsed = 0;
	setFixedSize(200, 200);
	ui.setupUi(this);
}

AboutWidget::~AboutWidget()
{

}

void AboutWidget::animate()
{
	elapsed = (elapsed + qobject_cast<QTimer*>(sender())->interval()) % 1000;
	update();
}

void AboutWidget::paintEvent(QPaintEvent *event)
{
	QPainter painter;
	painter.begin(this);
	painter.setRenderHint(QPainter::Antialiasing);
	helper->paint(&painter, event, elapsed);
	painter.end();
}	

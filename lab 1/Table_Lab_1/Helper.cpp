#include "Helper.h"

Helper::Helper()
{
	QLinearGradient gradient(QPointF(50, -20), QPointF(80, 20));
	gradient.setColorAt(0.0, Qt::white);
	gradient.setColorAt(1.0, QColor(0xa6, 0xce, 0x39));

	background = QBrush(QColor(64, 32, 64));
	circleBrush = QBrush(gradient);
	circlePen = QPen(Qt::black);
	circlePen.setWidth(1);
	textPen = QPen(Qt::white);
	textFont.setPixelSize(50);
}

Helper::~Helper()
{
}

void Helper::paint(QPainter *painter, QPaintEvent *event, int count)
{
    QPixmap img(":\img\Test_Text.png");
	if (img.isNull())
	{
		QMessageBox::critical(
			0,
			QObject::tr("Alert"),
			QObject::tr("Image not found!"));
		exit(0);
	}
	painter->fillRect(event->rect(), background);
	painter->setFont(QFont("Times", 40, QFont::Normal));
	painter->save();
	painter->setBrush(Qt::white);
	painter->setPen(Qt::red);
	painter->drawRect(showRect(img, count, painter));
}

QRect Helper::showRect(QPixmap img, int count, QPainter *painter)
{
	QRect rect(0, 0, 0, 0);
	double y = count;
	painter->drawPixmap(0, y, 600, 120, img);
	return rect;
}

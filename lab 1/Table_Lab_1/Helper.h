#ifndef HELPER_H
#define HELPER_H

#include <QBrush>
#include <QFont>
#include <QPen>
#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QWidget>
#include <QPixmap>
#include <QMessageBox>

class Helper
{
public:
	Helper();
	~Helper();
public:
	void paint(QPainter *painter, QPaintEvent *event, int count);
private:
	QBrush background;
	QBrush circleBrush;
	QFont textFont;
	QPen circlePen;
	QPen textPen;
	QRect showRect(QPixmap img, int count, QPainter *painter);
};

#endif // HELPER_H

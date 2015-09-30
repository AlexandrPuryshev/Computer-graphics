#ifndef HELPER_H
#define HELPER_H

#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QFont>
#include <QPaintEvent>


class Helper
{
public:
	Helper();
	~Helper();
public:
	void paint(QPainter *painter, QPaintEvent *event, int elapsed);
private:
	QBrush background;
	QBrush circleBrush;
	QFont textFont;
	QPen circlePen;
	QPen textPen;
};

#endif // HELPER_H
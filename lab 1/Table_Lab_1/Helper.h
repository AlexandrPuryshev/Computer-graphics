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
	void paint(QPainter *painter, QPaintEvent *event, int elapsed);

private:

	QBrush m_background;
	QFont m_font;
	QPen m_letter1, m_letter2;
	double m_maxHeight;
	double m_time;
	double m_u;
	double m_curU;
	double m_y;
	int m_k, m_last;

	QRect showRect(QPixmap img, int count, QPainter *painter);
};

#endif // HELPER_H

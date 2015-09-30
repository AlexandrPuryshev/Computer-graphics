#ifndef ABOUTWIDGET_H
#define ABOUTWIDGET_H

#include <QWidget>
#include "Helper.h"
#include "ui_AboutWidget.h"

class AboutWidget : public QWidget
{
	Q_OBJECT

public:
	AboutWidget(Helper *helper, QWidget *parent);
	~AboutWidget();

	public slots:
	void animate();

protected:
	void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
	Ui::AboutWidget ui;
	Helper *helper;
	int elapsed;
};

#endif // ABOUTWIDGET_H

#include "about_window.h"
#include "about_me.h"

#include <QGridLayout>
#include <QLabel>
#include <QTimer>

About_Window::About_Window()
{
	setWindowTitle(tr("2D Painting on Native and OpenGL Widgets"));

	About_ME *native = new About_ME(&helper, this);
	QLabel *nativeLabel = new QLabel(tr("Native"));
	nativeLabel->setAlignment(Qt::AlignHCenter);

	QGridLayout *layout = new QGridLayout;
	layout->addWidget(native, 0, 0);
	layout->addWidget(nativeLabel, 1, 0);
	setLayout(layout);
	//анимация(по времени)
	/////////////////////////////////////////////////////////////////
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), native, SLOT(animate()));
	timer->start(50);
}

About_Window::~About_Window()
{
}

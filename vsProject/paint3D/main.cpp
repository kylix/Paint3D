#include "stdafx.h"
#include "paint3dframe.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//QDir::setCurrent(QCoreApplication::applicationDirPath ());
	//qDebug()<<QCoreApplication::applicationDirPath ();
	QTranslator *translator = new QTranslator;
	translator->load("paint3d_zh.qm");
	a.installTranslator(translator);
	Paint3DFrame* app = Paint3DFrame::getInstance();
	app->initialize();
	app->show();
	return a.exec();
}

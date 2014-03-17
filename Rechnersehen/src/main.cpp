// Rechnersehen.cpp : Defines the entry point for the console application.
//

#include <QtWidgets/QApplication>
#include <QtCore/QDir>

#include "main_gui.h"

int main(int argc, char* argv[])
{
	QApplication qt_app(argc, argv);

	qt_app.addLibraryPath("../../Qt5"); // to load jpeg files (imageformats)

	main_GUI window;
	window.show();

	qt_app.exec();

}


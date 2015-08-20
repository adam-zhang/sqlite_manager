/*=============================================================================
#     FileName: appMain.cpp
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 07:21:24
#      History:
=============================================================================*/

#include <QApplication>
#include "MainWindow.h"


int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	MainWindow window;
	window.show();
	return app.exec();
}

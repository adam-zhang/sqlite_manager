/*=============================================================================
#     FileName: MainWindow.cpp
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 10:46:40
#      History:
=============================================================================*/
#include "MainWindow.h"
#include "MainWidget.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	setCentralWidget(new MainWidget);
}

/*=============================================================================
#     FileName: MainWidget.h
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 10:55:00
#      History:
=============================================================================*/
#ifndef __MAINWIDGET__H
#define __MAINWIDGET__H

#include <QWidget>

class MainWidget : public QWidget
{
	Q_OBJECT 
public:
	MainWidget(QWidget* parent = 0);
private:
	void createWidgets();
};

#endif

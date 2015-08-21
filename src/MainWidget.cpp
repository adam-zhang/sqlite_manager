/*=============================================================================
#     FileName: MainWidget.cpp
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 10:52:00
#      History:
=============================================================================*/
#include "MainWidget.h"
#include "DatabaseListWidget.h"
#include "DetailWidget.h"
#include <QSplitter>

MainWidget::MainWidget(QWidget* parent)
	: QWidget(parent)
{
	createWidgets();
}

void MainWidget::createWidgets()
{
	QSplitter* splitter = new QSplitter(Qt::Horizontal, this);
	splitter->addWidget(new DatabaseListWidget);
	splitter->addWidget(new DetailWidget);
}

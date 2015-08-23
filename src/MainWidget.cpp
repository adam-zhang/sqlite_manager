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
	  ,databaseList_(NULL)
	  ,detailWidget_(NULL)
{
	createWidgets();
}

void MainWidget::createWidgets()
{
	QSplitter* splitter = new QSplitter(this);
	databaseList_ = new DatabaseListWidget;
	detailWidget_ = new DetailWidget;
	splitter->addWidget(databaseList_);
	splitter->addWidget(detailWidget_);
	splitter->setStretchFactor(1, 20);
}

void MainWidget::addDatabase(const QString& databaseName)
{
	databaseList_->addDatabase(databaseName);
}


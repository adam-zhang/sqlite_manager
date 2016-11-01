/*=============================================================================
#     FileName: DatabaseListWidget.cpp
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-21 07:21:38
#      History:
=============================================================================*/

#include "DatabaseListWidget.h"
//#include "OpenedDatabases.h"
#include <cassert>
#include <QListWidget>
#include <QVBoxLayout>

DatabaseListWidget::DatabaseListWidget(QWidget* parent)
	: QWidget(parent)
	  , listWidget_(NULL)
	  //, list_(new OpenedDatabases)
{
	QVBoxLayout* layout = new QVBoxLayout(this);
	listWidget_ = new QListWidget;
	layout->addWidget(listWidget_);
}

void DatabaseListWidget::addDatabase(const QString& name)
{
	//list_->addDatabase(name);
	listWidget_->addItem(name);
}

void DatabaseListWidget::removeDatabase(const QString& name)
{
	//list_->removeDatabase(name);
}

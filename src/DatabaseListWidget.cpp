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
#include <QListView>
#include <QVBoxLayout>

DatabaseListWidget::DatabaseListWidget(QWidget* parent)
	: QWidget(parent)
{
	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(new QListView);
}

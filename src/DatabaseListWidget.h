/*=============================================================================
#     FileName: DatabaseListWidget.h
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-21 07:23:07
#      History:
=============================================================================*/

#ifndef __DATABASELISTWIDGET__H
#define __DATABASELISTWIDGET__H

#include <QWidget>

class OpenedDatabases;

class DatabaseListWidget : public QWidget
{
public:
	DatabaseListWidget(QWidget* parent = 0);
private:
	QScopedPointer<OpenedDatabases> list_;
public:
	void addDatabase(const QString& name);
	void removeDatabase(const QString& name);
};

#endif

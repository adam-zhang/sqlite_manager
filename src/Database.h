/*=============================================================================
#     FileName: Database.h
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-22 17:30:24
#      History:
=============================================================================*/
#ifndef __DATABASE__H
#define __DATABASE__H

#include <QObject>

class Database : public QObject
{
public:
	Database(QObject* parent = 0);
	Database(const QString& name, QObject* parent);
public:
	const QString& name()const;
private:
	QString name_;
};
#endif

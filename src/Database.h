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
#include <QSharedPointer>

class Database : public QObject
{
public:
	explicit Database(QObject* parent = 0);
	Database(const QString& name, QObject* parent = 0);
public:
	const QString& name()const;
private:
	QString name_;
};

//bool operator==(const Database& database, const QString& name);
//bool operator==(const QString& name,  const Database& database);
//bool operator==(const Database& left, const Database& right);
//bool operator==(const QString& name, const QSharedPointer<Database>& database);
//bool operator==(const QSharedPointer<Database>& database, const QString& name);
//bool operator!=(const QString& name, QSharedPointer<Database>& database);
//bool operator!=(const QSharedPointer<Database>& database, const QString& name);
//bool operator!=(const Database& database, const QString& name);
//bool operator!=(const QString& name, const Database& database);
//bool operator!=(const Database& left, const Database& right);
#endif

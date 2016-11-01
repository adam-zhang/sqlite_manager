/*=============================================================================
#     FileName: Database.cpp
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-22 17:28:56
#      History:
=============================================================================*/
#include "Database.h"

Database::Database(QObject* parent)
	: QObject(parent)
{
}

Database::Database(const QString& name, QObject* parent)
	: name_(name)
	  , QObject(parent)
{
}


const QString& Database::name()const
{
	return name_;
}

//bool operator ==(const Database& database, const QString& name)
//{
//	return database.name() == name;
//}
//
//bool operator==(const QString& name,  const Database& database)
//{
//	return name == database.name();
//}
//bool operator==(const Database& left, const Database& right)
//{
//	return left.name() == right.name();
//}
//
//bool operator==(const QString& name, const QSharedPointer<Database>& database)
//{
//	return name == database->name();
//}
//
//bool operator==(const QSharedPointer<Database>& database, const QString& name)
//{
//	return name == database->name();
//}
//
//
//bool operator!=(const QString& name, QSharedPointer<Database>& database)
//{
//	return !(name == database->name());
//}
//
//bool operator!=(const QSharedPointer<Database>& database, const QString& name)
//{
//	return !(name == database->name());
//}
//
//bool operator!=(const Database& database, const QString& name)
//{
//	return ! (database.name() == name);
//}
//
//bool operator!=(const QString& name, const Database& database)
//{
//	return !(name == database.name());
//}
//
//bool operator!=(const Database& left, const Database& right)
//{
//	return !(left.name() == right.name());
//}




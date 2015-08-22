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


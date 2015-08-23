/*=============================================================================
#     FileName: PathAlgo.cpp
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-23 20:09:19
#      History:
=============================================================================*/

#include "PathAlgo.h"
#include "Assistant.h"

QString pathGetFileName(const QString& path)
{
	return path.right(path.lastIndexOf(getSeparater()));
}


/*=============================================================================
#     FileName: Assistant.cpp
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 20:20:44
#      History:
=============================================================================*/
#include "Assistant.h"

QString getSeparater()
{
#ifdef Q_OS_WIN32
	return "\\";
#else
	return "/";
#endif
}

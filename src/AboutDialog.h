/*=============================================================================
#     FileName: AboutDialog.h
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 11:53:40
#      History:
=============================================================================*/
#ifndef __ABOUTDIALOG__H
#define __ABOUTDIALOG__H

#include <QDialog>

class AboutDialog : public QDialog
{
	Q_OBJECT
public:
	AboutDialog(QWidget* parent = 0);
private:
	void createWidgets();
};

#endif

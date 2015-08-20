/*=============================================================================
#     FileName: DatabaseNameDialog.h
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 14:35:23
#      History:
=============================================================================*/

#ifndef __DATABASENAMEDIALOG__H
#define __DATABASENAMEDIALOG__H

#include <QDialog>
class QLineEdit;

class DatabaseNameDialog : public QDialog
{
	Q_OBJECT
public:
	DatabaseNameDialog(QWidget* parent = 0);
private:
	QLineEdit* lineEdit_;
private:
	void createWidgets();
private:
private slots:
	void onAccepted();
	void onRejected();
public:
	const QString fileName();
};
#endif

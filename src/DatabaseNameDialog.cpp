/*=============================================================================
#     FileName: DatabaseNameDialog.cpp
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 14:33:16
#      History:
=============================================================================*/

#include "DatabaseNameDialog.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QDialogButtonBox>

DatabaseNameDialog::DatabaseNameDialog(QWidget* parent)
	: QDialog(parent)
{
	createWidgets();
}

const QString DatabaseNameDialog::fileName()
{
	return lineEdit_->text();
}

void DatabaseNameDialog::createWidgets()
{
	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(new QLabel(tr("The suffix .sqlite will append automatically")));
	lineEdit_ = new QLineEdit;
	layout->addWidget(lineEdit_);
	QDialogButtonBox* buttonGroup = new QDialogButtonBox(QDialogButtonBox::Ok|QDialogButtonBox::Cancel);
	connect(buttonGroup, SIGNAL(accepted()), this, SLOT(onAccepted()));
	connect(buttonGroup, SIGNAL(rejected()), this, SLOT(onRejected()));
	layout->addWidget(buttonGroup);
}

void DatabaseNameDialog::onRejected()
{
	lineEdit_->setText("");
}

void DatabaseNameDialog::onAccepted()
{
	close();
}

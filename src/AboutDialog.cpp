/*=============================================================================
#     FileName: AboutDialog.cpp
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 11:52:53
#      History:
=============================================================================*/

#include "AboutDialog.h"
#include <QGridLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QDialogButtonBox>

AboutDialog::AboutDialog(QWidget* parent)
{
	createWidgets();
}

void AboutDialog::createWidgets()
{
	QVBoxLayout* vLayout = new QVBoxLayout(this);
	QGridLayout* layout = new QGridLayout;
	layout->addWidget(new QLabel(tr("Author:")), 0, 0);
	layout->addWidget(new QLabel(tr("Mingping (Adam) Zhang")), 0, 1);
	layout->addWidget(new QLabel(tr("Email:")), 1, 0);
	layout->addWidget(new QLabel(tr("mingpingzhang@163.com")), 1, 1);
	layout->addWidget(new QLabel(tr("Homepage:")), 2, 0);
	vLayout->addLayout(layout);

	QDialogButtonBox* buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok);
	connect(buttonBox, SIGNAL(accepted()), this, SLOT(close()));
	vLayout->addWidget(buttonBox);
}


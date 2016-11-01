/*=============================================================================
#     FileName: MainWindow.cpp
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 10:46:40
#      History:
=============================================================================*/
#include "MainWindow.h"
#include "MainWidget.h"
#include "AboutDialog.h"
#include "DatabaseNameDialog.h"
#include "Assistant.h"
#include <QMenu>
#include <QMenuBar>
#include <QApplication>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	setCentralWidget(new MainWidget(this));
	createMenus();
	setPosition();
}


void MainWindow::createMenus()
{
	createDatabaseMenu();
	createTableMenu();
	createIndexMenu();
	createViewMenu();
	createTriggerMenu();
	createToolsMenu();
	createHelpMenu();
}

void MainWindow::createDatabaseMenu()
{
	QMenu* databaseMenu = menuBar()->addMenu(tr("&Databashe"));
	QAction* action = databaseMenu->addAction("&New Database");
	connect(action, SIGNAL(triggered()), this, SLOT(onNewDatabase()));
	action = databaseMenu->addAction("&Open Database");
	connect(action, SIGNAL(triggered()), this, SLOT(onOpenDatabase()));

	
	action = databaseMenu->addAction(tr("E&xit"));
	connect(action, SIGNAL(triggered()), this, SLOT(onQuit()));
}

void MainWindow::createTableMenu()
{
	QMenu* tableMenu = menuBar()->addMenu("&Table");
}

void MainWindow::createIndexMenu()
{
	QMenu* indexMenu = menuBar()->addMenu("&Index");
}

void MainWindow::createViewMenu()
{
	QMenu* viewMenu = menuBar()->addMenu("&View");
}

void MainWindow::createTriggerMenu()
{
	QMenu* triggerMenu = menuBar()->addMenu("T&rigger");
}

void MainWindow::createToolsMenu()
{
	QMenu* toolsMenu = menuBar()->addMenu("T&ools");
}


void MainWindow::createHelpMenu()
{
	QMenu* helpMenu = menuBar()->addMenu("&Help");
	QAction* aboutAction = helpMenu->addAction("&About");
	connect(aboutAction, SIGNAL(triggered()), this, SLOT(onAbout()));
}

void MainWindow::onAbout()
{
	AboutDialog dialog(this);
	dialog.exec();
}

void MainWindow::setPosition()
{
	int width = 800;
	int height = 600;
	int w = QApplication::desktop()->width();
	int h = QApplication::desktop()->height();
	int x = (w - width) >> 1;
	int y = (h - height) >> 1;
	setGeometry(x, y, width, height);
}

void MainWindow::onNewDatabase()
{
	QString databaseName = getNewDatabaseName();
	if(databaseName.length() == 0)
	{
		QMessageBox::critical(this,
				tr("Sqlite"),
				tr("Invalid file name!"));
		return;
	}
	qDebug() << databaseName;
	createDatabase(databaseName);
	addDatabase(databaseName);
}

void MainWindow::addDatabase(const QString& databaseName)
{
	//centralWidget->addDatabase(databaseName);
}

QString MainWindow::getNewDatabaseName()
{
	QString fileName = getFileName();
	if (!fileName.length())
		return QString();
	QString path = getPath();
	if (!path.length())
		return QString();
	return path + getSeparater() + fileName + ".sqlite";
}

QString MainWindow::getFileName()
{
	DatabaseNameDialog dialog;
	dialog.exec();
	return dialog.fileName();
}


QString MainWindow::getPath()
{
	QFileDialog fileDialog;
	fileDialog.setFileMode(QFileDialog::Directory);
	if(!fileDialog.exec())
		return QString();
	return fileDialog.selectedFiles()[0];
}


void MainWindow::createDatabase(const QString& databaseName)
{
}

void MainWindow::onQuit()
{
	QString str(tr("Are you sure to quit this program"));
	if (QMessageBox::question(this,
			tr("Sqlite"),
			str,
			QMessageBox::Yes 
			| QMessageBox::No) == QMessageBox::Yes)
		close();
}

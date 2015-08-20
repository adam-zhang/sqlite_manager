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
#include <QMenu>
#include <QMenuBar>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	setCentralWidget(new MainWidget);
	createMenus();
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
	databaseMenu_ = menuBar()->addMenu(tr("&Databashe"));
}

void MainWindow::createTableMenu()
{
	tableMenu_ = menuBar()->addMenu("&Table");
}

void MainWindow::createIndexMenu()
{
	indexMenu_ = menuBar()->addMenu("&Index");
}

void MainWindow::createViewMenu()
{
	viewMenu_ = menuBar()->addMenu("&View");
}

void MainWindow::createTriggerMenu()
{
	triggerMenu_ = menuBar()->addMenu("T&rigger");
}



void MainWindow::createToolsMenu()
{
	toolsMenu_ = menuBar()->addMenu("T&ools");
}


void MainWindow::createHelpMenu()
{
	helpMenu_ = menuBar()->addMenu("&Help");
	aboutAction_ = helpMenu_->addAction("&About");
	connect(aboutAction_, SIGNAL(triggered()), this, SLOT(onAboutAction()));
}

void MainWindow::onAboutAction()
{
	AboutDialog dialog;
	dialog.exec();
}


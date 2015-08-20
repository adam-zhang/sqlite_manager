/*=============================================================================
#     FileName: MainWindow.h
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 10:47:51
#      History:
=============================================================================*/
#ifndef __MAINWINDOW__H
#define __MAINWINDOW__H

#include <QMainWindow>

class QMenu;
class QAction;

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow(QWidget* parent = 0);
private:
	void createMenus();
	void createDatabaseMenu();
	void createTableMenu();
	void createIndexMenu();
	void createViewMenu();
	void createTriggerMenu();
	void createToolsMenu();
	void createHelpMenu();
private:
	void setPosition();
private:
	QMenu* databaseMenu_;
	QMenu* tableMenu_;
	QMenu* indexMenu_;
	QMenu* viewMenu_;
	QMenu* triggerMenu_;
	QMenu* toolsMenu_;
	QMenu* helpMenu_;
	
//Actions:
	QAction* aboutAction_;
	QAction* newDatabaseAction_;
	QAction* quitAction_;

private slots:
	void onAbout();
	void onNewDatabase();
	void onQuit();

};
#endif

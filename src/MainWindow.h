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
class MainWidget;

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow(QWidget* parent = 0);
private:
	MainWidget* centralWidget_;
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
	QString getNewDatabaseName();
	QString getFileName();
	QString getPath();
	void createDatabase(const QString& databaseName);
	void addDatabase(const QString&);
private:
	
private slots:
	void onAbout();
	void onNewDatabase();
	void onQuit();

};
#endif

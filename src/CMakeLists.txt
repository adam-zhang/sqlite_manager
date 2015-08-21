#=============================================================================
#     FileName: CMakeLists.txt
#         Desc: 
#       Author: Mingping (Adam) Zhang
#        Email: mingpingzhang@163.com
#     HomePage: 
#      Version: 0.0.1
#   LastChange: 2015-08-20 07:16:42
#      History:
#=============================================================================

project(sqlite_manager)
cmake_minimum_required(VERSION 2.8)
find_package(Qt4 REQUIRED)
include(${QT_USE_FILE})
set(sources 
	appMain.cpp 
	MainWindow.cpp
	MainWidget.cpp
	AboutDialog.cpp
	DatabaseNameDialog.cpp
	Assistant.cpp
	Database.cpp
	DatabaseListWidget.cpp
	DetailWidget.cpp
	)
set(moc_headers 
	MainWindow.h
	MainWidget.h
	AboutDialog.h
	DatabaseNameDialog.h
	DatabaseListWidget.h
	DetailWidget.h
	)
set(headers 
	${moc_headers}
	Assistant.h
	Database.h
	)
#set(mocs ${moc_headers})
QT4_WRAP_CPP(mocs ${moc_headers})
add_executable(sqlite_manager ${sources} ${mocs} ${headers})
target_link_libraries(sqlite_manager ${QT_LIBRARIES})

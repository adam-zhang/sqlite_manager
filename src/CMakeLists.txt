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
#set(QT_DONT_USE_QTGUI true)
set(sources 
	appMain.cpp 
	MainWindow.cpp
	MainWidget.cpp
	)
set(headers 
	MainWindow.h
	MainWidget.h
	)
set(moc_sources ${headers})
QT4_WRAP_CPP(mocs ${headers})
add_executable(sqlite_manager ${sources} ${mocs} ${headers})
target_link_libraries(sqlite_manager ${QT_LIBRARIES})

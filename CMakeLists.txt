cmake_minimum_required(VERSION 3.26)

project(Test) 

include_directories(${CMAKE_BINARY_DIR})
find_package(Qt5 COMPONENTS Widgets REQUIRED)

SET(CMAKE_AUTOUIC OFF)

QT5_WRAP_UI(qtproject_UIS_H SyncSettingsDlgMin.ui)

add_executable( Test WIN32
                 main.cpp 
				 ${qtproject_UIS_H}
				 
          )
set_target_properties( Test PROPERTIES FOLDER Apps )
          
target_link_libraries( Test 
                 Qt5::Widgets
                 Qt5::Core
          )



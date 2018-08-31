## Introduction

Qt cross-platform application development framework, some well known app
* KDE
* Opera
* Google Earth
* Skype

Dual licensed, it can be used for comercial and open source applications, Qt toolkit is well
established in the open source comunity.

#### Building 
I use CMake with CLion for building this project

```bash
cmake_minimum_required(VERSION 3.12)
project(Qt_sample)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH "/opt/Qt/5.11.2/gcc_64/lib/cmake")


set(SOURCE_FILES main.cpp)
find_package(Qt5Widgets REQUIRED)
add_executable(qt_sample ${SOURCE_FILES})
target_link_libraries(qt_sample Qt5::Widgets)
```
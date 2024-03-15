cmake_minimum_required(VERSION 3.27)
project(Spreadsheet)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/home/lucas/Qt/6.6.2/gcc_64/lib/cmake")

set(QT_VERSION 6)
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt6::Core Qt6::Gui Qt6::Widgets)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Spreadsheet main.cpp)
target_link_libraries(Spreadsheet
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
)


set (SINGLE_TARGET common)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

# set(TS_FILES ${SINGLE_TARGET}_en_US.ts)

set(PROJECT_SOURCES
	basic3d.cpp
	basic3d.h
	points.h
    triangulate.cpp
    triangulate.h
)

add_library(${SINGLE_TARGET} STATIC
	${PROJECT_SOURCES}
)
target_link_libraries(${SINGLE_TARGET} PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_property(TARGET ${SINGLE_TARGET} PROPERTY FOLDER common) 

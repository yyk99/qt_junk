### Computer Graphics Programming in C++/Qt Leen Ammeraal February 13, 2020

Ammeraal, Leen. Computer Graphics Programming in C++/Qt . UNKNOWN. Kindle Edition. 

### How to Build

#### qmake

	cd 1.1
	mkdir build-win64
	cd build-win64
	qmake ..\simpledraw.pro
	nmake debug

#### cmake

	cd 1.1
	mkdir build-cmake-win64
	cd build-cmake-win64
	"c:\Program Files\CMake\bin\cmake.exe" .. -DCMAKE_PREFIX_PATH=c:\qt\5.15.2\msvc2019_64\lib\cmake

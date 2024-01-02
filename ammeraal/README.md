### Computer Graphics Programming in C++/Qt Leen Ammeraal February 13, 2020

Ammeraal, Leen. Computer Graphics Programming in C++/Qt . UNKNOWN. Kindle Edition. 

### How to Build

#### qmake

	cd 1.1
	mkdir build-win64
	cd build-win64
	qmake ..\simpledraw.pro
	nmake debug

#### cmake (to build individual example)

	cd 1.1
	"c:\Program Files\CMake\bin\cmake.exe" -S . -B build-cmake-win64 ^
		-DCMAKE_PREFIX_PATH=c:\qt\5.15.2\msvc2019_64\lib\cmake
	"c:\Program Files\CMake\bin\cmake.exe" --build build-cmake-win64

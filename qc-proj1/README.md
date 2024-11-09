An example of a QC (Qt Creator project)

How to build

In general, just open in QC and build it


In particular:

- Windows

    cmake.exe -S . -B build-vs2022 -DCMAKE_PREFIX_PATH=c:/Qt/5.15.2/msvc2019_64/lib/cmake/Qt5
    cmake.exe --build build-vs2022

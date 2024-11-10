:
for i in ammeraal interview q_app1 q_app2 q_load_image_in_label q_load_image_in_scene qc-proj1 qt_html_renderer qt_tab_control # rasterwindow simpletreemodel
do
	echo $i
	"c:\Program Files\CMake\bin\cmake.exe" -S $i -B build-qt5-$i -DCMAKE_PREFIX_PATH=c:/qt6/5.14.2/msvc2017_64/lib/cmake
	"c:\Program Files\CMake\bin\cmake.exe" --build build-qt5-$i
done

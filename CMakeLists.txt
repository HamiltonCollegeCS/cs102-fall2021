cmake_minimum_required(VERSION 3.17)
project(project09)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -Werror=all)

add_library(ncurses STATIC IMPORTED)
set_property(TARGET ncurses PROPERTY
             IMPORTED_LOCATION "./ncurses-6.2/install/lib/libncurses.a")

include_directories(BEFORE SYSTEM ./ncurses-6.2/install/include)

add_executable(ncurses_test ncurses_test.cpp)
target_link_libraries(ncurses_test ncurses)

set(OPENCV_LIBRARY_DIRS "/usr/lib64")

set(OPENCV_LIBRARIES        ${OPENCV_LIBRARY_DIRS}/libopencv_calib3d.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_contrib.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_core.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_features2d.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_flann.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_highgui.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_imgproc.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_legacy.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_ml.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_objdetect.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_photo.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_stitching.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_superres.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_ts.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_video.so
                            ${OPENCV_LIBRARY_DIRS}/libopencv_videostab.so)

add_executable(opencv_test opencv_test.cpp)
target_link_libraries(opencv_test ${OPENCV_LIBRARIES})

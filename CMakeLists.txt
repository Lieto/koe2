cmake_minimum_required(VERSION 3.5)
project(koe2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Temperature.cpp Temperature.h Humidity.cpp Humidity.h Vector3d.cpp Vector3d.h Point2d.cpp Point2d.h HelloWorld.cpp HelloWorld.h Monster.cpp Monster.h MonsterGenerator.cpp MonsterGenerator.h StdRandom.h Random.cpp Random.h Counter.cpp Counter.h Interval1D.cpp Interval1D.h test_classes.cpp)
set(TEST_FILES Interval1D.cpp Interval1D.h Interval2D.cpp Interval2D.h test_classes.cpp StdDraw.cpp StdDraw.h)

#add_executable(koe2 ${SOURCE_FILES})
add_executable(test_classes ${TEST_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "D:/opencv/build/my_mingw_build")
set(OpenCV_DIR "D:/opencv/build/my_mingw_build")

find_package(OpenCV COMPONENTS core highgui REQUIRED)

target_link_libraries(test_classes ${OpenCV_LIBS})

#set(SFML_ROOT "D:/SFML-2.3.2-windows-gcc-4.9.2-mingw-64-bit/SFML-2.3.2")
#find_package(SFML 2.3 REQUIRED system window graphics network audio)
#if (SFML_FOUND)
#    include_directories(${SFML_INCLUDE_DIR})
#    target_link_libraries(test_classes ${SFML_LIBRARIES})
#endif()


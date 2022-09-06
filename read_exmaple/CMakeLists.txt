cmake_minimum_required(VERSION 3.13.4)
#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED on)
#set(CMAKE_BUILD_TYPE "debug") # "release"

project(reader)


find_package(Eigen3 REQUIRED NO_MODULE)
#INCLUDE_DIRECTORIES()
#LINK_LIBRARIES()

add_executable(${PROJECT_NAME} reader.cpp)
add_executable(thread thread.cpp)
add_executable(eigen_test eigen_test.cpp)
TARGET_LINK_LIBRARIES(eigen_test Eigen3::Eigen)

# this is very important or you can not find the right directory of lib file
add_subdirectory(glfw)

add_executable(boing_test boing_test.cpp)
target_include_directories(boing_test PUBLIC glfw/include/GLFW)
target_link_directories(boing_test PUBLIC glfw/src)
target_link_libraries(boing_test glfw)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_BUILD_TYPE "debug") # "release"

project(test VERSION 0.1.0)

include_directories(include)

# ====================================================
# set up the needed include_directories and the link_libraries at the first file
find_package(Boost COMPONENTS python)
find_package(PythonInterp)
find_package(PythonLibs REQUIRED)
include_directories(${Boost_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})
link_libraries(${Boost_LIBRARIES} ${PYTHON_LIBRARIES}) # Deprecated but so convenient!

# ====================================================
# build the so file for python interpreter
# PYTHON_ADD_MODULE(boost_c src/boost_c.cpp)
# target_include_directories(boost_c PUBLIC ${CMAKE_SOURCE_DIR}/include)

# ====================================================
# build the functions called in the main function
add_subdirectory(read_exmaple)
add_subdirectory(src)
# ====================================================

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC func_lib boost_c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

# see https://cmake.org/cmake/help/latest/module/FindBoost.html


#find_package(Boost REQUIRED COMPONENTS python)
#find_package(PythonInterp)
#find_package(PythonLibs REQUIRED)
#include_directories(${Boost_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/include)
#LINK_LIBRARIES(${Boost_LIBRARIES} ${PYTHON_LIBRARIES}) # Deprecated but so convenient!

add_library(func_lib func.cpp)
add_library(boost_c boost_c.cpp)
#target_link_libraries(boost_c ${Boost_LIBRARIES})


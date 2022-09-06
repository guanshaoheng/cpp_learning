#define BOOST_PYTHON_STATIC_LIB

#include <boost/python/module.hpp>
#include <boost/python/def.hpp>

const char *hello_boost();
const char *hello_world();

// ============================================
// CAUTION: The following files are essential for 
// the c++ and boost based python link library! However, 
// if the following statement is added it will 
// not compile for use in a c++ program call
// ============================================
// BOOST_PYTHON_MODULE(boost_c)
// {
//     using namespace boost::python;
//     def("hello_boost", hello_boost);
//     def("hello_world", hello_world);
// }
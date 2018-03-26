cmake_minimum_required(VERSION 3.1)
project( ArtoNNLib VERSION 1.0 DESCRIPTION "clBlas Test" )
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)
find_package( OpenCL REQUIRED )
find_package( clBLAS REQUIRED )

include_directories( ${OpenCL_INCLUDE_DIRS} ${clBLAS_INCLUDE_DIR} )

add_library( libCLBlasWrapper wrapper.cpp )
target_link_libraries( libCLBlasWrapper ${OpenCL_LIBRARY} ${CLBLAS_LIBRARIES} )

add_executable( Test main.cpp )
target_link_libraries( Test libCLBlasWrapper )

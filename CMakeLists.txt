cmake_minimum_required( VERSION 2.6 )

set( FINANCE_EXECUTABLE finance )

project( ${FINANCE_EXECUTABLE} )

add_executable( ${FINANCE_EXECUTABLE} main.cc )

#find_package( Boost 1.37 COMPONENTS system program_options regex REQUIRED )
#include_directories( ${Boost_INCLUDE_DIR} )

#target_link_libraries( ${FINANCE_EXECUTABLE} ${Boost_LIBRARIES} )


if( CMAKE_COMPILER_IS_GNUCXX )
    message( STATUS "GCC detected, adding compile flags" )
    set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O3 -std=c++0x" )
endif( CMAKE_COMPILER_IS_GNUCXX )

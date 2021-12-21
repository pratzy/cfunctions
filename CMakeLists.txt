cmake_minimum_required(VERSION 3.10.0)
project(cfunctions VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../lib)

include_directories(include/)

# set(Boost_USE_STATIC_LIBS ON)  # only find static libs
# set(Boost_USE_DEBUG_LIBS OFF) # ignore debug libs and
# set(Boost_USE_RELEASE_LIBS ON)  # only find release libs
# set(Boost_USE_MULTITHREADED ON)
# set(Boost_USE_STATIC_RUNTIME OFF)

# if (APPLE)
#     set(BOOST_ROOT /usr/local/Cellar/boost/*)
# endif ()
# find_package(Boost 1.60.0)
# if (Boost_FOUND)
#     message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
#     message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
#     message(STATUS "Boost_VERSION: ${Boost_VERSION}")
#     include_directories(${BOOST_ROOT})
#     include_directories(${Boost_INCLUDE_DIRS})
#     link_directories(${Boost_LIBRARY_DIRS})
# endif ()

add_subdirectory(src)

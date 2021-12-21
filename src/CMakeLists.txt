set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${cfunctions_SOURCE_DIR}/bin/functions)
add_executable(hello_world HelloWorld.c)
# target_include_directories(functions_demo PRIVATE ${cpp-practice_SOURCE_DIR}/include/functions)


add_subdirectory(stdlib)
add_subdirectory(stdio)
add_subdirectory(stdarg)
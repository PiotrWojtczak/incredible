cmake_minimum_required(VERSION 2.8.5)
project(led)

find_library(LIBRARY_LIB
		NAMES liblibrary.dylib library
		PATHS /Users/pwojtczak/git/lib/library /usr/lib /usr/local/lib
		)

find_path(LIBRARY_INCLUDES flashlight.hpp
			/Users/pwojtczak/git/lib/library
			/usr/local/include
			/usr/include
			)

include_directories(${LIBRARY_INCLUDES})

add_executable(${PROJECT_NAME} led.cpp)
target_link_libraries (${PROJECT_NAME} LINK_PUBLIC library )

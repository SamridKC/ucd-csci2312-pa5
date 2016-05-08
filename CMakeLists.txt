cmake_minimum_required(VERSION 3.3)
project(ucd_csci2312_pa5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    custom_iterator.h
    ErrorContext.cpp
    ErrorContext.h
    main.cpp
    TemplateTests.cpp
    TemplateTests.h less_functor.h)

add_executable(ucd_csci2312_pa5 ${SOURCE_FILES})
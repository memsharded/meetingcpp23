cmake_minimum_required(VERSION 3.15)
project(rbsrouter CXX)




add_library(rbsrouter src/rbsrouter.cpp)
target_include_directories(rbsrouter PUBLIC include)



set_target_properties(rbsrouter PROPERTIES PUBLIC_HEADER "include/rbsrouter.h")
install(TARGETS rbsrouter)

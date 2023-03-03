cmake_minimum_required(VERSION 3.15)
project(mara CXX)




add_library(mara src/mara.cpp)
target_include_directories(mara PUBLIC include)



set_target_properties(mara PROPERTIES PUBLIC_HEADER "include/mara.h")
install(TARGETS mara)

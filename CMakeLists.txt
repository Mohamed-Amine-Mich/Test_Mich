project(Project_Mich)
cmake_minimum_required(VERSION 2.8)

add_subdirectory(Mich_Library)
add_subdirectory(Mich_UnitTest)
add_subdirectory(Mich_Application)

add_subdirectory(external_Lib/googletest)
add_subdirectory(external_Lib/jsoncpp)

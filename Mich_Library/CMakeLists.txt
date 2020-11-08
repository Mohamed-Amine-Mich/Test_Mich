
cmake_minimum_required(VERSION 2.8)

#add_library(${CMAKE_PROJECT_NAME}_lib src/calcul.cpp include/calcul.h)
#target_include_directories(${CMAKE_PROJECT_NAME}_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
###
#target_link_libraries(${CMAKE_PROJECT_NAME}_lib PUBLIC ${CMAKE_PROJECT_NAME}_lib libjsoncpp_static.a)
#target_link_libraries(${CMAKE_PROJECT_NAME}_lib jsoncpp_lib)
###
#install(FILES graph.json DESTINATION ${CMAKE_BINARY_DIR}/bin)


cmake_minimum_required(VERSION 2.8)

add_library(${CMAKE_PROJECT_NAME}_lib STATIC src/calcul.cpp include/calcul.h)
target_include_directories(${CMAKE_PROJECT_NAME}_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
###
target_link_libraries(${CMAKE_PROJECT_NAME}_lib jsoncpp_lib)
###

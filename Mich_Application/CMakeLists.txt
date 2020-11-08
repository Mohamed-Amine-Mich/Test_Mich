
cmake_minimum_required(VERSION 2.8)

add_executable(${CMAKE_PROJECT_NAME}_exe main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME}_exe PUBLIC ${CMAKE_PROJECT_NAME}_lib)
install(TARGETS ${CMAKE_PROJECT_NAME}_exe RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/bin)

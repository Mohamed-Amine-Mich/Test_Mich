
cmake_minimum_required(VERSION 2.8)

add_executable(${CMAKE_PROJECT_NAME}_tu src/michelinTestUnit.cpp src/michelinTestUnit_TestClass.cpp include/michelinTestUnit_TestClass.h)
target_include_directories(${CMAKE_PROJECT_NAME}_tu PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${CMAKE_PROJECT_NAME}_tu PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)
install(TARGETS ${CMAKE_PROJECT_NAME}_tu DESTINATION ${CMAKE_BINARY_DIR}/bin)
install(FILES graphTest.json DESTINATION ${CMAKE_BINARY_DIR}/bin)

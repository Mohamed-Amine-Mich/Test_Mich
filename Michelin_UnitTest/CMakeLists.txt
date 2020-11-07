

#find_package(Qt5 COMPONENTS Test REQUIRED)

#add_executable(calcTestExec src/calcTestUnit.cpp src/calcTestUnit_TestClass.cpp)
#message("--> CalcTestExec current source dir = ${CMAKE_CURRENT_SOURCE_DIR}")
#target_include_directories(calcTestExec PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#target_link_libraries(calcTestExec PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)

add_executable(${CMAKE_PROJECT_NAME}_tu src/michelinTestUnit.cpp src/michelinTestUnit_TestClass.cpp include/michelinTestUnit_TestClass.h)
target_include_directories(${CMAKE_PROJECT_NAME}_tu PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${CMAKE_PROJECT_NAME}_tu PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)
install(TARGETS ${CMAKE_PROJECT_NAME}_tu DESTINATION ${CMAKE_BINARY_DIR}/bin)
install(FILES graphTest.json DESTINATION ${CMAKE_BINARY_DIR}/bin)

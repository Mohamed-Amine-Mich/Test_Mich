#add_executable(${CMAKE_PROJECT_NAME}_tu src/michelinTestUnit.cpp src/michelinTestUnit_TestClass.cpp include/michelinTestUnit_TestClass.h)
#target_include_directories(${CMAKE_PROJECT_NAME}_tu PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#target_link_libraries(${CMAKE_PROJECT_NAME}_tu PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)
#install(TARGETS ${CMAKE_PROJECT_NAME}_tu RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/bin)
#install(FILES graphTest.json DESTINATION ${CMAKE_BINARY_DIR}/bin)


cmake_minimum_required(VERSION 2.8)

add_executable(${CMAKE_PROJECT_NAME}_tu src/michelinTestUnit.cpp src/michelinTestUnit_TestClass.cpp include/michelinTestUnit_TestClass.h)
target_include_directories(${CMAKE_PROJECT_NAME}_tu PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${CMAKE_PROJECT_NAME}_tu PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)

if(NOT CMAKE_CONFIGURATION_TYPES)
  install(TARGETS ${CMAKE_PROJECT_NAME}_tu RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/bin)
  message("------> : CMAKE_CONFIGURATION_TYPES : " ${CMAKE_CONFIGURATION_TYPES} "  : is not defined !")
else()
  install(TARGETS ${CMAKE_PROJECT_NAME}_tu CONFIGURATIONS ${CMAKE_CONFIGURATION_TYPES} RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/bin/${CMAKE_CONFIGURATION_TYPES})
  message("------> : CMAKE_CONFIGURATION_TYPES : " ${CMAKE_CONFIGURATION_TYPES} "  : is defined !")
endif()


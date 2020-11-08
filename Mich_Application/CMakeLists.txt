
cmake_minimum_required(VERSION 2.8)

add_executable(${CMAKE_PROJECT_NAME}_exe main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME}_exe PUBLIC ${CMAKE_PROJECT_NAME}_lib)


if(NOT CMAKE_CONFIGURATION_TYPES)
  install(TARGETS ${CMAKE_PROJECT_NAME}_exe RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/bin)
  install(FILES "graph.json" "graphTest.json" DESTINATION ${CMAKE_BINARY_DIR}/bin)
  message("------> : CMAKE_CONFIGURATION_TYPES : " ${CMAKE_CONFIGURATION_TYPES} "  : is not defined !")
else()
  install(TARGETS ${CMAKE_PROJECT_NAME}_exe RUNTIME DESTINATION ${CMAKE_BINARY_DIR}/bin/${CMAKE_CONFIGURATION_TYPES})
  install(FILES "graph.json" "graphTest.json" DESTINATION ${CMAKE_BINARY_DIR}/bin/${CMAKE_CONFIGURATION_TYPES})
  message("------> : CMAKE_CONFIGURATION_TYPES : " ${CMAKE_CONFIGURATION_TYPES} "  : is defined !")
endif()


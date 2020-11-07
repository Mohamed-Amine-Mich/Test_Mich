
add_executable(${CMAKE_PROJECT_NAME}_exec main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME}_exec ${CMAKE_PROJECT_NAME}_lib)

install(TARGETS ${CMAKE_PROJECT_NAME}_exec DESTINATION ${CMAKE_BINARY_DIR}/bin)



add_executable (client main.cpp)

find_package (Curses REQUIRED)
include_directories ( ${CURSES_INCLUDE_DIRS} )
target_link_libraries ( client ${CURSES_LIBRARIES} )
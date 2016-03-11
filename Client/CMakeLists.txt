
set(CMAKE_CXX_STANDARD 11)

add_executable (client main.cpp)

# Curses lib

if (APPLE)
	find_package (Curses REQUIRED)
	include_directories ( ${CURSES_INCLUDE_DIRS} )
	target_link_libraries ( client ${CURSES_LIBRARIES} )
endif()

if (WIN32)

	find_path(PDCURSES_INCLUDE_DIR NAMES curses.h PATHS ./PDCurses)
	include_directories( ${PDCURSES_INCLUDE_DIR} )

	find_library(PDCURSES_LIBRARY NAMES pdcurses.lib PATHS ./PDCurses)
	set(CLIENT_LIBRARIES ${CLIENT_LIBRARIES} ${PDCURSES_LIBRARY})
	target_link_libraries(client ${CLIENT_LIBRARIES})

endif()

# Sources

add_subdirectory (Utils)
add_subdirectory (Game)
add_subdirectory (Input)
add_subdirectory (Model)
add_subdirectory (Scene)
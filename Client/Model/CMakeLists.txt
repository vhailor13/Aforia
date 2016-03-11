file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.h)

target_sources(client PUBLIC ${HEADERS})
target_sources(client PUBLIC ${SOURCES})


add_library(event_loop
    include/battleship/event_loop/event_loop.h
    src/event_loop.cpp)
target_include_directories(event_loop PUBLIC include)

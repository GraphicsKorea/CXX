add_library(Foo SHARED src/config.h src/foo.cpp)
add_library(Bar SHARED src/config.h src/bar.cpp)

add_executable(Visibility src/main.cpp)
target_link_libraries(Visibility Foo Bar)


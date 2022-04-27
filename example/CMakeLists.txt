add_executable(
    unremarkable-example
    main.cpp
)

target_link_libraries(
    unremarkable-example
    PRIVATE
    unremarkable::unremarkable
)
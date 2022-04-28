# Add Unremarkable executable target.
add_executable(
    unremarkable-example
    main.cpp
)

# Link example application against Unremarkable and SFML libraries.
target_link_libraries(
    unremarkable-example
    PRIVATE
    unremarkable::unremarkable
    sfml-window
    sfml-system
    sfml-graphics
)
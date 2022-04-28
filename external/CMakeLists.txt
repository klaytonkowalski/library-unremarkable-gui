# Locate SFML 2.5.1 repository.
FetchContent_Declare(
    sfml
    GIT_REPOSITORY https://github.com/SFML/SFML
    GIT_TAG 2.5.1
)

# Download and configure SFML libraries.
FetchContent_MakeAvailable(sfml)
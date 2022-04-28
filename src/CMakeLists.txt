# Collect Unremarkable header files.
set(
    UNREMARKABLE_HEADERS
    ../include/Utility.hpp
    ../include/Application.hpp
    ../include/Widget.hpp
    ../include/Frame.hpp
)

# Collect Unremarkable source files.
set(
    UNREMARKABLE_SOURCES
    Utility.cpp
    Application.cpp
    Widget.cpp
    Frame.cpp
)

# Add Unremarkable library target.
add_library(
    ${PROJECT_NAME}
    ${UNREMARKABLE_HEADERS}
    ${UNREMARKABLE_SOURCES}
)

# Add Unremarkable scoped alias.
add_library(
    ${PROJECT_NAME}::${PROJECT_NAME}
    ALIAS
    ${PROJECT_NAME}
)

# Set up convenient #include directories.
target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/src>
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

# Link Unremarkable against SFML libraries.
target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
    sfml-window
    sfml-system
    sfml-graphics
)

# Match Unremarkable API version to project version.
set_target_properties(
    ${PROJECT_NAME}
    PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
)

# Generate "unremarkable_export.h" file for handling symbol visibility.
generate_export_header(${PROJECT_NAME})

# Remove symbol visibility macros if Unremarkable is built statically.
if(NOT BUILD_SHARED_LIBS)
    target_compile_definitions(
        ${PROJECT_NAME}
        PRIVATE
        UNREMARKABLE_STATIC_DEFINE
    )
endif()

# Generate "unremarkable-config-version.cmake" file for importing with find_package().
write_basic_package_version_file(
    ${PROJECT_BINARY_DIR}/unremarkable-config-version.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
)
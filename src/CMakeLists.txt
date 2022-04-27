set(
    UNREMARKABLE_HEADERS
    ../include/utility.hpp
    ../include/application.hpp
)

set(
    UNREMARKABLE_SOURCES
    utility.cpp
    application.cpp
)

add_library(
    ${PROJECT_NAME}
    ${UNREMARKABLE_HEADERS}
    ${UNREMARKABLE_SOURCES}
)

add_library(
    ${PROJECT_NAME}::${PROJECT_NAME}
    ALIAS
    ${PROJECT_NAME}
)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    $<BUILD_INTERFACE:${PROJECT_BINARY_DIR}/src>
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
    sfml-window
    sfml-system
    sfml-graphics
)

set_target_properties(
    ${PROJECT_NAME}
    PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
)

generate_export_header(${PROJECT_NAME})

if(NOT BUILD_SHARED_LIBS)
    target_compile_definitions(
        ${PROJECT_NAME}
        PRIVATE
        UNREMARKABLE_STATIC_DEFINE
    )
endif()

write_basic_package_version_file(
    ${PROJECT_BINARY_DIR}/unremarkable-config-version.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
)
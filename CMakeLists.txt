# Require CMake 3.15 for no real reason.
cmake_minimum_required(VERSION 3.15)

# Declare Unremarkable project.
project(
    unremarkable
    VERSION 0.0.0
    DESCRIPTION "Unremarkable GUI provides minimalistic widgets for building GUI applications."
    HOMEPAGE_URL "https://github.com/klaytonkowalski/library-unremarkable-gui"
    LANGUAGES CXX
)

# Include functions for fetching dependencies.
include(FetchContent)

# Include functions for generating "Unremarkable_Export.h" file.
include(GenerateExportHeader)

# Include cross-platform CMAKE_INSTALL_<SUFFIX> variables.
include(GNUInstallDirs)

# Add cmake directory to CMAKE_MODULE_PATH.
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# Set modern C++ requirements.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Disable default symbol visibility.
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_VISIBILITY_INLINES_HIDDEN ON)

# Build Unremarkable as shared or static library.
option(BUILD_SHARED_LIBS "Build shared libraries." ON)

# Build Unremarkable example application.
option(UNREMARKABLE_BUILD_EXAMPLE "Build Unremarkable example." ON)

# Install Unremarkable artifacts.
option(UNREMARKABLE_INSTALL "Install Unremarkable artifacts." ON)

# Print options.
message(STATUS "Unremarkable -> BUILD_SHARED_LIBS ${BUILD_SHARED_LIBS}")
message(STATUS "Unremarkable -> UNREMARKABLE_BUILD_EXAMPLE ${UNREMARKABLE_BUILD_EXAMPLE}")
message(STATUS "Unremarkable -> UNREMARKABLE_INSTALL ${UNREMARKABLE_INSTALL}")

# Fetch dependencies.
add_subdirectory(external)

# Configure Unremarkable library.
add_subdirectory(src)

# Configure Unremarkable example application.
if(UNREMARKABLE_BUILD_EXAMPLE)
    add_subdirectory(example)
endif()

# Install Unremarkable artifacts.
if(UNREMARKABLE_INSTALL)
    include(cmake/install.cmake)
endif()
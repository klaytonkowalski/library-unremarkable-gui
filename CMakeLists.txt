###############################################################################
# PROJECT
###############################################################################

cmake_minimum_required(VERSION 3.15)

project(
    unremarkable
    VERSION 0.0.0
    DESCRIPTION "Unremarkable GUI provides minimalistic widgets for building GUI applications."
    HOMEPAGE_URL "https://github.com/klaytonkowalski/library-unremarkable-gui"
    LANGUAGES CXX
)

###############################################################################
# DEPENDENCIES
###############################################################################

include(FetchContent)
include(GenerateExportHeader)
include(GNUInstallDirs)

###############################################################################
# VARIABLES
###############################################################################

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_VISIBILITY_INLINES_HIDDEN ON)

###############################################################################
# OPTIONS
###############################################################################

option(BUILD_SHARED_LIBS "Build shared libraries." ON)
option(UNREMARKABLE_BUILD_EXAMPLE "Build Unremarkable example." ON)
option(UNREMARKABLE_INSTALL "Install Unremarkable artifacts." ON)

message(STATUS "Unremarkable -> BUILD_SHARED_LIBS ${BUILD_SHARED_LIBS}")
message(STATUS "Unremarkable -> UNREMARKABLE_BUILD_EXAMPLE ${UNREMARKABLE_BUILD_EXAMPLE}")
message(STATUS "Unremarkable -> UNREMARKABLE_INSTALL ${UNREMARKABLE_INSTALL}")

###############################################################################
# SUBDIRECTORIES
###############################################################################

add_subdirectory(external)
add_subdirectory(src)

if(UNREMARKABLE_BUILD_EXAMPLE)
    add_subdirectory(example)
endif()

###############################################################################
# INSTALLS
###############################################################################

if(UNREMARKABLE_INSTALL)
    include(cmake/install.cmake)
endif()
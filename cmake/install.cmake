# Install Unremarkable library.
install(
    TARGETS unremarkable
    EXPORT unremarkable-config
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

# Install Unremarkable header files.
install(
    DIRECTORY include/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/unremarkable
)

# Install "unremarkable_export.h" file.
install(
    FILES ${CMAKE_CURRENT_BINARY_DIR}/src/unremarkable_export.h
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/unremarkable
)

# Install "unremarkable-config.cmake" file.
install(
    EXPORT unremarkable-config
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/unremarkable
)

# Install "unremarkable-config-version.cmake" file.
install(
    FILES ${CMAKE_CURRENT_BINARY_DIR}/unremarkable-config-version.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/unremarkable
)

# Install Unremarkable example application.
if(BUILD_UNREMARKABLE_EXAMPLE)
    install(
        TARGETS unremarkable-example
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    )
endif()
install(
    TARGETS unremarkable
    EXPORT unremarkable-config
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(
    DIRECTORY include/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/unremarkable
)

install(
    FILES ${CMAKE_CURRENT_BINARY_DIR}/unremarkable_export.h
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/unremarkable
)

install(
    EXPORT unremarkable-config
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/unremarkable
)

install(
    FILES ${CMAKE_CURRENT_BINARY_DIR}/unremarkable-config-version.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/unremarkable
)

if(BUILD_UNREMARKABLE_EXAMPLE)
    install(
        TARGETS unremarkable-example
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    )
endif()
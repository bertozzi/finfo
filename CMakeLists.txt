cmake_minimum_required(VERSION 2.8)

set(CMAKE_VERBOSE_MAKEFILE OFF)
set_property(GLOBAL PROPERTY RULE_MESSAGES OFF)


project(esempi)

add_compile_options(-Wall -g -O0 -std=c99)
set(CMAKE_C_COMPILER "gcc")

if(NOT INCLUDE_INSTALL_DIR)
    set(INCLUDE_INSTALL_DIR include/${PACKAGE_NAME_VERSION})
endif()

if(NOT LIBRARY_INSTALL_DIR)
    set(LIBRARY_INSTALL_DIR lib)
endif()

if(NOT BINARY_INSTALL_DIR)
    set(BINARY_INSTALL_DIR bin)
endif()

if(NOT DOCUMENTATION_INSTALL_DIR)
    if(WIN32)
        set(DOCUMENTATION_INSTALL_DIR doc)
    else()
        set(DOCUMENTATION_INSTALL_DIR share/doc/${PACKAGE_NAME_VERSION})
    endif()
endif()

if(NOT MODULES_INSTALL_DIR)
    if(WIN32)
        set(MODULES_INSTALL_DIR cmake)
    else()
        set(MODULES_INSTALL_DIR share/${PACKAGE_NAME_VERSION})
    endif()
endif()


aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SOURCES)


set(SOURCES_LIST ${SOURCES})
separate_arguments(SOURCES_LIST)


list(LENGTH SOURCES_LIST len)


foreach(SRC ${SOURCES_LIST})
  get_filename_component(FILENAME ${SRC} NAME)
  get_filename_component(TARGETNAME ${SRC} NAME_WE)
  add_executable(${TARGETNAME} ${SRC})
  target_link_libraries (${TARGETNAME} -lm)
endforeach()

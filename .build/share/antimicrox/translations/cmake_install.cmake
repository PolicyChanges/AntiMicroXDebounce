# Install script for directory: /home/architect/dev/test/antimicrox/share/antimicrox/translations

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/antimicrox/translations" TYPE FILE FILES
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_br.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_ca.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_de.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_en.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_es.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_fa.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_fi.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_fr.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_hr.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_id.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_it.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_ja.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_ko.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_nb_NO.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_nl.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_pl.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_pt.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_pt_BR.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_ru.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_rue.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_sr.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_sv.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_tr.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_uk.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_vi.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox_zh_CN.qm"
    "/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/antimicrox.qm"
    )
endif()


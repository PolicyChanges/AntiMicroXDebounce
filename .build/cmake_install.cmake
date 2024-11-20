# Install script for directory: /home/architect/dev/test/antimicrox

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/antimicrox" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/antimicrox")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/antimicrox"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/architect/dev/test/antimicrox/.build/bin/antimicrox")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/antimicrox" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/antimicrox")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/antimicrox")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/apps" TYPE FILE RENAME "io.github.antimicrox.antimicrox.png" FILES "/home/architect/dev/test/antimicrox/share/icons/application/16x16/apps/16-apps-io.github.antimicrox.antimicrox.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/24x24/apps" TYPE FILE RENAME "io.github.antimicrox.antimicrox.png" FILES "/home/architect/dev/test/antimicrox/share/icons/application/24x24/apps/24-apps-io.github.antimicrox.antimicrox.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/apps" TYPE FILE RENAME "io.github.antimicrox.antimicrox.png" FILES "/home/architect/dev/test/antimicrox/share/icons/application/32x32/apps/32-apps-io.github.antimicrox.antimicrox.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/apps" TYPE FILE RENAME "io.github.antimicrox.antimicrox.png" FILES "/home/architect/dev/test/antimicrox/share/icons/application/48x48/apps/48-apps-io.github.antimicrox.antimicrox.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/apps" TYPE FILE RENAME "io.github.antimicrox.antimicrox.png" FILES "/home/architect/dev/test/antimicrox/share/icons/application/64x64/apps/64-apps-io.github.antimicrox.antimicrox.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/apps" TYPE FILE RENAME "io.github.antimicrox.antimicrox.png" FILES "/home/architect/dev/test/antimicrox/share/icons/application/128x128/apps/128-apps-io.github.antimicrox.antimicrox.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/apps" TYPE FILE RENAME "io.github.antimicrox.antimicrox.svg" FILES "/home/architect/dev/test/antimicrox/share/icons/application/scalable/apps/sc-apps-io.github.antimicrox.antimicrox.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/breeze/48x48/apps" TYPE FILE RENAME "antimicrox_trayicon.png" FILES "/home/architect/dev/test/antimicrox/share/icons/breeze_themed/48-apps-antimicrox_trayicon.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/breeze")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/breeze")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/apps" TYPE FILE RENAME "antimicrox_trayicon.png" FILES "/home/architect/dev/test/antimicrox/src/images/48-apps-antimicrox_trayicon.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/antimicrox" TYPE FILE FILES "/home/architect/dev/test/antimicrox/CHANGELOG.md")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/architect/dev/test/antimicrox/other/io.github.antimicrox.antimicrox.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mime/packages" TYPE FILE FILES "/home/architect/dev/test/antimicrox/other/io.github.antimicrox.antimicrox.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/antimicrox" TYPE FILE FILES "/home/architect/dev/test/antimicrox/CHANGELOG.md")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /usr/bin/gmake manpage WORKING_DIRECTORY "/home/architect/dev/test/antimicrox/.build")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /usr/bin/gmake appdata WORKING_DIRECTORY "/home/architect/dev/test/antimicrox/.build")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/udev/rules.d/60-antimicrox-uinput.rules")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/lib/udev/rules.d" TYPE FILE FILES "/home/architect/dev/test/antimicrox/other/60-antimicrox-uinput.rules")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /usr/bin/gmake updateqm WORKING_DIRECTORY "/home/architect/dev/test/antimicrox/.build")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/antimicrox" TYPE FILE RENAME "gamecontrollerdb.txt" FILES "/home/architect/dev/test/antimicrox/share/gamecontrollerdb_linux.txt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/antimicrox" TYPE FILE FILES "/home/architect/dev/test/antimicrox/share/LICENSE_SDL_GameControllerDB")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/architect/dev/test/antimicrox/.build/share/antimicrox/translations/cmake_install.cmake")
  include("/home/architect/dev/test/antimicrox/.build/other/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
  file(WRITE "/home/architect/dev/test/antimicrox/.build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()

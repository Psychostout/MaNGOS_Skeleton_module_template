# Copyright (C) 2026 MyFeature, released under GNU AGPL v3 license: https://github.com/Psychostout/mangos-cata-server/blob/master/LICENSE

# This root CMakeLists.txt allows the module to be included as a standalone 
# directory or a git submodule.

# Ensure the module is only processed if the main server target exists
if(TARGET mangosd)
    add_subdirectory(MyFeature)
else()
    message(STATUS "MyFeature: mangosd target not found, skipping module.")
endif()

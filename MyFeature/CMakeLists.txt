# Copyright (C) 2026 MyFeature, released under GNU AGPL v3 license: https://github.com/Psychostout/mangos-cata-server/blob/master/LICENSE

set(LIBRARY_NAME MyFeature)

# Define base source library
set(LIBRARY_SRCS
    "${CMAKE_CURRENT_SOURCE_DIR}/MyFeature.cpp"
)

# This assumes the parent CMakeLists.txt handles the addition of LIBRARY_SRCS to the target.
# If the core uses a different method, you may need to use target_sources(mangosd PRIVATE ${LIBRARY_SRCS})
if(TARGET mangosd)
    target_sources(mangosd PRIVATE ${LIBRARY_SRCS})
endif()

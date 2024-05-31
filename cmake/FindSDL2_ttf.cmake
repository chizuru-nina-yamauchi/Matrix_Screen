# FindSDL2_ttf.cmake

find_path(SDL2_TTF_INCLUDE_DIR SDL_ttf.h
        PATH_SUFFIXES SDL2
)

find_library(SDL2_TTF_LIBRARY
        NAMES SDL2_ttf
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(SDL2_ttf DEFAULT_MSG SDL2_TTF_LIBRARY SDL2_TTF_INCLUDE_DIR)

mark_as_advanced(SDL2_TTF_INCLUDE_DIR SDL2_TTF_LIBRARY)

set(SDL2_TTF_LIBRARIES ${SDL2_TTF_LIBRARY})
set(SDL2_TTF_INCLUDE_DIRS ${SDL2_TTF_INCLUDE_DIR})

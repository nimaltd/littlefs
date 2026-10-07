cmake_minimum_required(VERSION 3.16)

# Added in the NimaLTD fork, beside littlefs's own files, which are never edited
# here. It lets a CMake project take this repository in as a submodule:
#
#   add_subdirectory(littlefs)
#   target_link_libraries(${CMAKE_PROJECT_NAME} nimaltd::littlefs)
#
# The version is written once, in installer.yml, so there is none here to forget
# when the fork is synced.

project(littlefs
    LANGUAGES   C
    DESCRIPTION "A little fail-safe file system for microcontrollers"
    HOMEPAGE_URL "https://github.com/nimaltd/littlefs")

# Only the file system itself. bd/, runners/ and tests/ are littlefs's own test
# code, built by their Makefile, and stay out of this build.
add_library(littlefs STATIC lfs.c lfs_util.c)
add_library(nimaltd::littlefs ALIAS littlefs)

target_include_directories(littlefs PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

# The settings in lfs_defines.h, read by lfs_util.h through this define. PUBLIC,
# so every file linking littlefs is built with it too: LFS_THREADSAFE adds two
# members to struct lfs_config, and they all have to agree on where the rest sit.
target_compile_definitions(littlefs PUBLIC LFS_DEFINES=lfs_defines.h)

target_compile_features(littlefs PUBLIC c_std_99)

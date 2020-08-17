cmake_minimum_required(VERSION 3.16)
project(ww2ogg)

add_library(ww2ogg SHARED ww2ogg/codebook.cpp ww2ogg/crc.c ww2ogg/wwriff.cpp)

if(MSVC)
    generate_export_header(ww2ogg BASE_NAME WW2OGG DEFINE_NO_DEPRECATED EXPORT_FILE_NAME ${PROJECT_SOURCE_DIR}/ww2ogg/ww2ogg_export_win32.h)
else()
    generate_export_header(ww2ogg BASE_NAME WW2OGG DEFINE_NO_DEPRECATED EXPORT_FILE_NAME ${PROJECT_SOURCE_DIR}/ww2ogg/ww2ogg_export_cl.h)
endif()

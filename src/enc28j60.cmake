# Automatically include all .c files in the src/ directory
file(GLOB ENC28J60_SOURCES
    "${CMAKE_SOURCE_DIR}/src/*.c"
)

# Create a library target for the ENC28J60 module
add_library(enc28j60 STATIC ${ENC28J60_SOURCES})

# Optionally, include the directory for header files
target_include_directories(enc28j60 PUBLIC ${CMAKE_SOURCE_DIR}/src)

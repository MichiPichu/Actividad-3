# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\User_Interface_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\User_Interface_autogen.dir\\ParseCache.txt"
  "User_Interface_autogen"
  )
endif()

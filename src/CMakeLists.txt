cmake_minimum_required (VERSION 2.8)
set(CMAKE_MODULE_PATH ../cmake)
project (dds-tutorial)

include (MacroOpenSplice)
include (osmacros)

find_package (OpenSplice REQUIRED)

include_directories(
  ${PROJECT_SOURCE_DIR}
  ${OpenSplice_INCLUDE_DIRS}
  /home/itfanr/repo_git/github.com/ADLINK-IST/opensplice/src/api/dcps/isocpp2/include/
)

set (idls HelloWorldData.idl)

foreach(idl ${idls})
	OpenSplice_IDLGEN (${idl})
	string (REGEX REPLACE "\(.*\).idl" "./\\1.cpp" VARS_1 ${idl})
	string (REGEX REPLACE "\(.*\).idl" "./\\1.h" VARS_2 ${idl})
	string (REGEX REPLACE "\(.*\).idl" "./\\1_DCPS.hpp" VARS_3 ${idl})
	string (REGEX REPLACE "\(.*\).idl" "./\\1SplDcps.cpp" VARS_7 ${idl})
	string (REGEX REPLACE "\(.*\).idl" "./\\1SplDcps.h" VARS_8 ${idl})
	set(OpenSplice_DATAMODEL ${OpenSplice_DATAMODEL} ${VARS_1} ${VARS_2} ${VARS_3} ${VARS_4} ${VARS_5} ${VARS_6} ${VARS_7} ${VARS_8} ${VARS_9})
endforeach(idl)

set (PUB_SOURCES
	publisher.cpp
	implementation.cpp
)
set (SUB_SOURCES
	subscriber.cpp
	implementation.cpp
)

set (PUB_EXE ttpub)
set (SUB_EXE ttsub)
set (DATAMODEL datamodel)

add_executable (${PUB_EXE} ${PUB_SOURCES})
add_executable (${SUB_EXE} ${SUB_SOURCES})

message(${DATAMODEL})
message(${OpenSplice_DATAMODEL})
add_library (${DATAMODEL} SHARED ${OpenSplice_DATAMODEL})

add_definitions (
 ${OpenSplice_DEFINITIONS}
 ${DEFINITIONS}
)

target_link_libraries (
  ${DATAMODEL} 
  ${OpenSplice_LIBRARIES}
)

target_link_libraries (${PUB_EXE}
 ${OpenSplice_LIBRARIES}
 ${DATAMODEL} 
)

target_link_libraries (${SUB_EXE}
 ${OpenSplice_LIBRARIES}
 ${DATAMODEL}
)

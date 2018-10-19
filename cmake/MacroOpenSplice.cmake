##############################################################################
# OpenSplice_IDLGEN(idlfilename)
#
# Macro to generate OpenSplice DDS sources from a given idl file with the 
# data structures.
# You must include the extension .idl in the name of the data file.
#
##############################################################################
# Courtersy of Ivan Galvez Junquera <ivgalvez@gmail.com>
##############################################################################


# Macro to create a list with all the generated source files for a given .idl filename
MACRO (DEFINE_OpenSplice_SOURCES idlfilename)
	SET(outsources)
	GET_FILENAME_COMPONENT(it ${idlfilename} ABSOLUTE)
	GET_FILENAME_COMPONENT(nfile ${idlfilename} NAME_WE)
	SET(outsources ${outsources} ${nfile}.cpp ${nfile}.h)
	SET(outsources ${outsources} ${nfile}SplDcps.cpp ${nfile}SplDcps.h)
	SET(outsources ${outsources} ${nfile}_Dcps.cpp ${nfile}_Dcps.hpp)	
ENDMACRO(DEFINE_OpenSplice_SOURCES)

MACRO (OpenSplice_IDLGEN idlfilename)
    message("now in OpenSplice_IDLGEN")
	GET_FILENAME_COMPONENT(it ${idlfilename} ABSOLUTE)
	GET_FILENAME_COMPONENT(idlfilename ${idlfilename} NAME)
    message("OpenSplice_IDLGEN_BINARY is")
    message(${OpenSplice_IDLGEN_BINARY})
    
	DEFINE_OpenSplice_SOURCES(${ARGV})
	ADD_CUSTOM_COMMAND (OUTPUT ${outsources}
		COMMAND ${OpenSplice_IDLGEN_BINARY}     
		ARGS  -l isocpp2 ${idlfilename}
		DEPENDS ${it}
	)
ENDMACRO (OpenSplice_IDLGEN)

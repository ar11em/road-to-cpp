Module_getThisModuleSafe()

add_executable(${this} public/Libreria.h public/Libro.h
                        private/Libreria.cpp private/Libro.cpp private/main.cpp)

Module_setIncludeDirectory(${this} public)
Module_setSourceDirectory(${this} private)

Module_setModuleLookPath(${this} .CompilerLookPath)

set_target_properties(${this} PROPERTIES LINKER_LANGUAGE CXX)

Module_export(${this})
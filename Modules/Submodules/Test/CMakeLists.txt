Module_getThisModuleSafe()

add_executable(${this} public/Libreria.h public/Libro.h public/LibroNormale.h public/Fumetto.h public/Rivista.h
                        private/Libreria.cpp private/Libro.cpp private/LibroNormale.cpp private/Fumetto.cpp private/Rivista.cpp private/main.cpp)

Module_setIncludeDirectory(${this} public)
Module_setSourceDirectory(${this} private)

Module_setModuleLookPath(${this} .CompilerLookPath)

set_target_properties(${this} PROPERTIES LINKER_LANGUAGE CXX)

Module_export(${this})
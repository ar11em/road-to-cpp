Module_getThisModuleSafe()

add_executable(${this} public/Personaggio.h public/ManiNude.h public/Armato.h public/Oggetto.h
                        private/Personaggio.cpp private/ManiNude.cpp private/Armato.cpp private/Oggetto.cpp private/main.cpp)

Module_setIncludeDirectory(${this} public)
Module_setSourceDirectory(${this} private)

Module_setModuleLookPath(${this} .CompilerLookPath)

set_target_properties(${this} PROPERTIES LINKER_LANGUAGE CXX)

Module_export(${this})
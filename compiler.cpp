#include <iostream>
#include <string>
#include "compiler.h"

int COMPILE_THE_INPUT_FILE(std::string& INPUT_FILE_NAME, std::string& OUTPUT_FILE_NAME, int& flags){
    std::cout << "hello" << std::endl;
    COMPILE_PROCESS* compile_process = CREATE_COMPILE_PROCESS(INPUT_FILE_NAME, OUTPUT_FILE_NAME, flags);
    if(!compile_process)
        throw COMPILER_FAILED_WITH_ERRORS;

    //perform lexical analysis

    //perform parsing

    //perform code generation
    
    return COMPILER_COMPILED_FILE_SUCCESSFULLY;
}
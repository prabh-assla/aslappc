#include <iostream>
#include <string>
#include "compiler.h"

int main(){
    std::cout << "Compilation Journey Begins..." << std::endl;

    std::string INPUT_FILE_NAME = "./xyz.txt",
    OUTPUT_FILE_NAME = "./xyz";
    int flags = 0;

    int response = COMPILE_THE_INPUT_FILE(INPUT_FILE_NAME, OUTPUT_FILE_NAME, flags);
        if(response == COMPILER_FAILED_WITH_ERRORS)
            throw "Sorry the compilation process was terminated due to some error";

        else if(response == COMPILER_COMPILED_FILE_SUCCESSFULLY)
            std::cout << "Compilation of file was successful";

        else
            throw "Unknown compilation behaviour";

return 0;
}
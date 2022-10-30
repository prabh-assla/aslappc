#include <iostream>
#include <string>
#include <fstream>
#include "compiler.h"

COMPILE_PROCESS* CREATE_COMPILE_PROCESS(std::string& INPUT_FILE_NAME, std::string& OUTPUT_FILE_NAME, int& flags){

        std::fstream* INPUT_FILE_PTR = nullptr;
        INPUT_FILE_PTR->open(INPUT_FILE_NAME.insert(0, "./"), std::ios::in);
        
        if(!INPUT_FILE_PTR->is_open())
            throw "Error: " + INPUT_FILE_NAME + ".txt isn't available in the directory";

    
        std::fstream* OUTPUT_FILE_PTR = nullptr;
        OUTPUT_FILE_PTR->open(OUTPUT_FILE_NAME.insert(0, "./"), std::ios::out);
        
        if(!OUTPUT_FILE_PTR->is_open())
            throw "Error: " + OUTPUT_FILE_NAME + ".txt isn't available in the directory";

        std::cout << INPUT_FILE_NAME << OUTPUT_FILE_NAME<< std::endl;

    COMPILE_PROCESS* compile_process = new COMPILE_PROCESS(flags, INPUT_FILE_PTR, INPUT_FILE_NAME, OUTPUT_FILE_PTR, OUTPUT_FILE_NAME);

    return compile_process;

}
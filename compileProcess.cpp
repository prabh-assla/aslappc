#include <string>
#include <fstream>
#include "compiler.h"

COMPILE_PROCESS* CREATE_COMPILE_PROCESS(std::string& INPUT_FILE_NAME, std::string& OUTPUT_FILE_NAME, int flags){

        std::fstream* INPUT_FILE_PTR = NULL;
        INPUT_FILE_PTR->open(INPUT_FILE_NAME.insert(0, "./"), std::ios::in);
        
        if(!INPUT_FILE_PTR->is_open())
            throw "Error: " + INPUT_FILE_NAME + ".txt isn't available in the directory";

    
        std::fstream* OUTPUT_FILE_PTR = NULL;
        OUTPUT_FILE_PTR->open(OUTPUT_FILE_NAME.insert(0, "./"), std::ios::out);
        
        if(!OUTPUT_FILE_PTR->is_open())
            throw "Error: " + OUTPUT_FILE_NAME + ".txt isn't available in the directory";

    COMPILE_PROCESS* com_pil_e_pro_ces_s = new COMPILE_PROCESS;

}
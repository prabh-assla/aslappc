#include <string>
#include <fstream>

    #pragma once
        class COMPILE_PROCESS{
            private :
                int flags;
                std::fstream* inputFile;
                std::string absolutePath_INPUT;
                std::fstream* outputFile;
                std::string absolutePath_OUTPUT;

            public :
            COMPILE_PROCESS() : 
                flags{NULL},
                inputFile{nullptr},
                absolutePath_INPUT{"/home/prabh/Documents/JsCompiler"},
                outputFile{nullptr},
                absolutePath_OUTPUT{"/home/prabh/Documents/JsCompiler/build"} {

            }

            COMPILE_PROCESS(
                int flags,
                std::fstream* inputFile,
                std::string absolutePath_INPUT,
                std::fstream* outputFile,
                std::string absolutePath_OUTPUT) : 
                
                flags{flags},
                inputFile{inputFile},
                absolutePath_INPUT{absolutePath_INPUT},
                outputFile{outputFile},
                absolutePath_OUTPUT{absolutePath_OUTPUT} {

            }

            COMPILE_PROCESS(const COMPILE_PROCESS& CP) : 
                flags{CP.return__flags()},
                inputFile{CP.return__inputFile()},
                absolutePath_INPUT{CP.return__absolutePath_INPUT()},
                outputFile{CP.return__outputFile()},
                absolutePath_OUTPUT{CP.return__absolutePath_OUTPUT()} {

            }

            inline int return__flags() const{
                return flags;
            }

            inline std::fstream* return__inputFile() const{
                return inputFile;
            }

            inline std::string return__absolutePath_INPUT() const{
                return absolutePath_INPUT;
            }

            inline std::fstream* return__outputFile() const{
                return outputFile;
            }

            inline std::string return__absolutePath_OUTPUT() const{
                return absolutePath_OUTPUT;
            }

        };

        int COMPILE_THE_INPUT_FILE(std::string&, std::string&, int&);
        COMPILE_PROCESS* CREATE_COMPILE_PROCESS(std::string&, std::string&, int&);

        enum{
            COMPILER_FAILED_WITH_ERRORS,
            COMPILER_COMPILED_FILE_SUCCESSFULLY
        };
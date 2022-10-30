#include <string>

    #pragma once
        class COMPILE_PROCESS{
            private :
                int flags;

                class COMPILE_PROCESS_inputFile{
                    private :
                        std::fstream* inputFile;
                        std::string absolutePath;

                    public :
                        COMPILE_PROCESS_inputFile() : inputFile{nullptr}, absolutePath{"/home/prabh"} {}

                        COMPILE_PROCESS_inputFile(std::fstream* IF, std::string AP) : inputFile{IF}, absolutePath{AP} {}

                        COMPILE_PROCESS_inputFile(const COMPILE_PROCESS_inputFile& CPI){
                            this->inputFile = CPI.inputFile;
                            this->absolutePath = CPI.absolutePath;
                        }
                };

                class COMPILE_PROCESS_outputFile{
                    private :
                        std::fstream* outputFile;
                        std::string absolutePath;

                    public :
                        COMPILE_PROCESS_outputFile() : outputFile{nullptr}, absolutePath{"/home/prabh"} {}

                        COMPILE_PROCESS_outputFile(std::fstream* OF, std::string AP) : outputFile{OF}, absolutePath{AP} {}

                        COMPILE_PROCESS_outputFile(const COMPILE_PROCESS_outputFile& CPO){
                            this->outputFile = CPO.outputFile;
                            this->absolutePath = CPO.absolutePath;
                        }
                };

            public :

            const inline int getterFLAGS(){
                return flags;
            }
            
            COMPILE_PROCESS() : flags{NULL} {
                COMPILE_PROCESS_inputFile c_p_i();
                COMPILE_PROCESS_outputFile c_p_o();
            }

            COMPILE_PROCESS(int flags, std::fstream* _IN, std::string path_IN, std::fstream* _OUT, std::string path_OUT) : flags{flags} {
                COMPILE_PROCESS_inputFile c_p_i(_IN, path_IN);
                COMPILE_PROCESS_outputFile c_p_o(_OUT, path_OUT);
            }

            COMPILE_PROCESS(const COMPILE_PROCESS& CP) : flags{CP.flags} {
                COMPILE_PROCESS_inputFile c_p_i(CP);
                COMPILE_PROCESS_outputFile c_p_o(_OUT, path_OUT);
            }
        };

        int COMPILE_THE_INPUT_FILE(std::string, std::string, int);
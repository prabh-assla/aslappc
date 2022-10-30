OBJECTS = ./build/compiler ./build/compileProcess
INCLUDES = -I./

all: ${OBJECTS}
	@g++ main.cpp ${INCLUDES} ${OBJECTS} -g -o ./main

./build/compiler: ./compiler.cpp
	@g++ compiler.cpp ${INCLUDES} -o ./build/compiler -g -c

./build/compileProcess: ./compileProcess.cpp
	@g++ compileProcess.cpp ${INCLUDES} -o ./build/compileProcess -g -c

clean:
	@rm -rf ./main ${OBJECTS}
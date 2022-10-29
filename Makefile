OBJECTS =
INCLUDES = -I./

all: ${OBJECTS}
	@g++ main.cpp ${INCLUDES} ${OBJECTS} -g -o ./main

clean:
	@rm ./main
	@rm -rf ${OBJECTS}
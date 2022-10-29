CFLAGS = -g

all: source1.o source2.o

source1.o: source1.cpp
	$(CXX) $(CFLAGS) -c source1.cpp
	
source2.o: source2.cpp
	$(CXX) $(CFLAGS) -c source2.cpp

clean:
	@rm -rf ./source1.o ./source2.o
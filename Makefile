all: ufo_functions.hpp ufo.cpp ufo_functions.cpp
	g++ ufo.cpp ufo_functions.cpp -o ufo
clean:
	rm ufo
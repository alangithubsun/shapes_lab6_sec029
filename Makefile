# Compiler
CXX ?= g++

# Compiler flags
CXXFLAGS ?= --std=c++17 -Wall -Werror -pedantic -g -Wno-sign-compare -Wno-comment

main.exe: main.cpp 
	$(CXX) $(CXXFLAGS) main.cpp -o main.exe

clean:
	rm main.exe
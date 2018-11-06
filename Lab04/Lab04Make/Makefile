OUTPUT = program

CXX=g++
CXXFLAGS=-Wall -O0 $(GXX_FLAGS) -std=c++11
CXXFLAGS+=-g
CXXFLAGS+=-DMAPCALC

#Dependency for the ouotput file
DEP_FLAGS=-MMD
DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)

#Add dependency generation to the compiler options 
CXXFLAGS+=$(DEP_FLAGS)

all: $(OUTPUT)

$(OUTPUT): $(OBJ)
	$(CXX) $(OBJ) -o $@

run: program
	@./program

clean:
	@echo Im deleting ready files
	@rm -f program $(OBJ) *.d

.PHONY: clean run

-include $(DEP)


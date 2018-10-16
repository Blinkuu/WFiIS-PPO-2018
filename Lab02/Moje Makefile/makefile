CC = g++
CXXFLAGS = -O -g

all: program

program: Main.o Iloczyn.o Iloczyn1.o Iloczyn2.o Kwadrat1.o PolozeniePoczatkowe.o Przyspieszenie.o Suma1.o Suma2.o
	$(CC) $(CXXFLAGS) Main.o Iloczyn.o Iloczyn1.o Iloczyn2.o Kwadrat1.o PolozeniePoczatkowe.o Przyspieszenie.o Suma1.o Suma2.o -o program

Main.o: Main.cpp
	$(CC) -c Main.cpp -o Main.o

Iloczyn.o: Iloczyn.cpp
	$(CC) -c Iloczyn.cpp -o Iloczyn.o

Iloczyn1.o: Iloczyn1.cpp
	$(CC) -c Iloczyn1.cpp -o Iloczyn1.o

Iloczyn2.o: Iloczyn2.cpp
	$(CC) -c Iloczyn2.cpp -o Iloczyn2.o

Kwadrat1.o: Kwadrat1.cpp
	$(CC) -c Kwadrat1.cpp -o Kwadrat1.o

PolozeniePoczatkowe.o: PolozeniePoczatkowe.cpp
	$(CC) -c PolozeniePoczatkowe.cpp -o PolozeniePoczatkowe.o

Przyspieszenie.o: Przyspieszenie.cpp
	$(CC) -c Przyspieszenie.cpp -o Przyspieszenie.o

Suma1.o: Suma1.cpp
	$(CC) -c Suma1.cpp -o Suma1.o

Suma2.o: Suma2.cpp
	$(CC) -c Suma2.cpp -o Suma2.o

clean:
	@echo Deleting ready files
	@rm -rf *.o program

run: program
	./program

.PHONY: clean run
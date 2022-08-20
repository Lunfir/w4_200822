unit:
	g++ -c Unit.cpp -o Unit.o

mage:
	g++ -c Mage.cpp -o Mage.o

soldier:
	g++ -c Soldier.cpp -o Soldier.o

viking:
	g++ -c Viking.cpp -o Viking.o

main: main.cpp
	g++ -c main.cpp -o main.o

all: unit mage soldier viking main
	g++ *.o -o main.exe

clear:
	rm *.exe *.o
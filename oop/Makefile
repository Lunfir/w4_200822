mage:
	g++ -c Mage.cpp -o Mage.o

soldier:
	g++ -c Soldier.cpp -o Soldier.o

main: main.cpp
	g++ -c main.cpp -o main.o

all: mage soldier main
	g++ *.o -o main.exe

clear:
	rm *.exe *.o
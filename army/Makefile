soldier:
	g++ -c Soldier.cpp -o Soldier.o

necromancer:
	g++ -c Necromancer.cpp -o Necromancer.o

spell:
	g++ -c Spell.cpp -o Spell.o

fireball:
	g++ -c Fireball.cpp -o Fireball.o

wrath:
	g++ -c Wrath.cpp -o Wrath.o

spellManager:
	g++ -c SpellManager.cpp -o SpellManager.o

all: soldier necromancer spell fireball wrath spellManager
	g++ *.o main.cpp -o main.exe

clear:
	rm *.o
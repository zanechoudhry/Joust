Joust: Knight.o Weapon.o Project.o Random.o
	g++ -std=c++11 Knight.o Weapon.o Project.o Random.o -o Joust
Knight.o: Knight.cpp Knight.h Weapon.h
	g++ -std=c++11 -c Knight.cpp 
Weapon.o: Weapon.cpp Weapon.h Random.h
	g++ -std=c++11 -c Weapon.cpp
Random.o: Random.cpp Random.h 
	g++ -c Random.cpp
Project.o: Project.cpp Weapon.h Knight.h
	g++ -std=c++11 -c Project.cpp
clean:
	rm -f Knight.o Weapon.o Random.o Project.o

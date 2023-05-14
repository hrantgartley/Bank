Bank: Main.o Bank.o
	g++ Main.o Bank.o -o Meep

Main.o: Main.cpp
	g++ -c Main.cpp

Bank.o: Bank.cpp
	g++ -c Bank.cpp

clean:
	del *.o
	del Meep.exe
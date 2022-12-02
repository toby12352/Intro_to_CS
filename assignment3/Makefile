CC = g++
EXE_FILE = zoo_tycoon

$(EXE_FILE) : zoo_tycoon.cpp zoo.o animal.o monkey.o sea_otter.o sloth.o
	$(CC) zoo_tycoon.cpp zoo.o animal.o monkey.o sea_otter.o sloth.o -o $(EXE_FILE)

zoo.o : zoo.h zoo.cpp
	$(CC) -c zoo.cpp

animal.o : animal.h animal.cpp
	$(CC) -c animal.cpp

monkey.o : monkey.h monkey.cpp
	$(CC) -c monkey.cpp

sea_otter.o : sea_otter.h sea_otter.cpp
	$(CC) -c sea_otter.cpp

sloth.o : sloth.h sloth.cpp
	$(CC) -c sloth.cpp

clean : 
	rm -f *.o $(EXE_FILE)
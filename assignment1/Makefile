CC = g++
exe_file = catalog_prog

$(exe_file) : run_wizard.cpp catalog.o
	$(CC) run_wizard.cpp catalog.o -g -o $(exe_file)

catalog.o : catalog.cpp catalog.h
	$(CC) -c catalog.cpp

clean :
	rm -f *.o $(exe_file)

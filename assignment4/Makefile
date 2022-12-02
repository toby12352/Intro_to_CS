CC = g++ -std=c++11
EXE_FILE = main

$(EXE_FILE) : test_linked_list.cpp linked_list.o node.o
	$(CC) test_linked_list.cpp linked_list.o node.o -o $(EXE_FILE)

linked_list.o : linked_list.cpp linked_list.h
	$(CC) -c linked_list.cpp

node.o : node.cpp node.h
	$(CC) -c node.cpp

clean :
	rm -f *.o $(EXE_FILE)
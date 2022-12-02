CC = g++
EXE_FILE = go_fish
all: $(EXE_FILE)

$(EXE_FILE) : go_fish.cpp card.o card.h deck.o deck.h hand.o hand.h player.o player.h game.o game.h
	$(CC) card.o deck.o hand.o player.o game.o go_fish.cpp -o $(EXE_FILE)

card.o : card.h card.cpp
	$(CC) -c card.cpp

deck.o : deck.h deck.cpp
	$(CC) -c deck.cpp

hand.o : hand.h hand.cpp
	$(CC) -c hand.cpp

player.o : player.h player.cpp
	$(CC) -c player.cpp

game.o : game.h game.cpp
	$(CC) -c game.cpp

clean :
	rm -f *.o $(EXE_FILE)
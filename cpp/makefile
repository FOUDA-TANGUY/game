CC = c++
LFLAGS = -I include -Wall -Wextra -Werror
EXEC = programme

exec : visuel.o main.o
	$(CC) obj/*.o -o bin/$(EXEC)

main.o :
	$(CC) -o obj/main.o -c src/main.cpp $(LFLAGS)

visuel.o :
	$(CC) -o obj/visuel.o -c src/visuel.cpp $(LFLAGS)



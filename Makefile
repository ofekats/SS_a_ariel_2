FLAG = -Wall -g

all: connections

connections: main.o my_mat.o
	gcc $(FLAG) -o connections main.o my_mat.o

main.o: main.c my_mat.h
	gcc $(FLAG) -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc $(FLAG) -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o *.a connections

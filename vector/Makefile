main: array.o vector.o
	gcc array.o vector.o -o main.exe

array.o: array.c
	gcc -c array.c

vector.o: vector.c
	gcc -c vector.c

clean:
	rm -f array.o vector.o main.exe

polish: 
	rm -f array.o vector.o

build:
	make main
	make polish

main: esame.o libretto.o main.o
	gcc esame.o libretto.o main.o -o main.exe

esame.o: esame.c
	gcc -c esame.c

libretto.o: libretto.c
	gcc -c libretto.c

main.o: main.c
	gcc -c main.c


clean:
	rm -f esame.o libretto.o  main.exe

polish: 
	rm -f esame.o libretto.o  main.o

build:
	make main
	make polish

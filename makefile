all:	main.o linkedlist.o
	gcc -o linkedlist linkedlist.o main.o

linkedlist.o:	linkedlist.c linkedlist.h
	gcc -c linkedlist.c

main.o: main.c linkedlist.h
	gcc -c main.c

run:
	./linkedlist

clear:
	rm linkedlist.o
	rm main.o
	rm linkedlist

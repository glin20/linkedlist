all:	linkedlist.o
	gcc -o linkedlist linkedlist.o

linkedlist.o:	linkedlist.c
	gcc -c linkedlist.c

run:
	./linkedlist

clear:
	rm linkedlist.o
	rm linkedlist

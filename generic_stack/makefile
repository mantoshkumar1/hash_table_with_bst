a.out: main.o stack.o
	gcc -g -O2 *o

main.o: main.c header.h
	gcc -g -c -Wall -O2 -I. main.c

stack.o: stack.c header.h
	gcc -g -c -Wall -O2 -I. stack.c

clean:
	rm -rf *.o a.out

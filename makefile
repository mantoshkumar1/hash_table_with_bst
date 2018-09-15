a.out: main.o hash.o bst.o
	gcc -g -O2 *.o

main.o: main.c header.h
	gcc -c -g -O2 -Wall -I. main.c
tree.o: bst.c header.h
	gcc -c -g -O2 -Wall -I. bst.c
hash.o: hash.c header.h
	gcc -c -g -O2 -Wall -I. hash.c

clean:
	rm -rf *.o a.out

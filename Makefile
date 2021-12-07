all:
	gcc -Wall  main.c binary_tree.h binary_tree.c 
init:
	./a.out
clean:
	rm a.out

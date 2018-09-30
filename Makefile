mergesortmake: mergesort.c test.c
	gcc -std=c99 -Wall -g -lm -o mergesort mergesort.c test.c

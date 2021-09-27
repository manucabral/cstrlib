CC = gcc

all: build

build: test.c
	$(CC) test.c cstrlib.c -o test

run: test
	./test

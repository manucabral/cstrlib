CC = gcc

all: build

build: global_test.c
	$(CC) global_test.c lib/cstrlib.c -o global_test

run: global_test
	./global_test

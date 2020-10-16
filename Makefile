all: bin/main format


.PHONY:
	clear format all

bin/main: build/src/main.o build/src/symbols.o
	gcc -Wall build/src/main.o build/src/symbols.o -o bin/main

build/src/main.o: src/main.c  src/symbols.h
	gcc -Wall -c src/main.c -o build/src/main.o

build/src/symbols.o: src/symbols.c src/symbols.h
	gcc -Wall -c src/symbols.c -o build/src/symbols.o

format:
	clang-format -i src/main.c src/symbols.h src/symbols.c

clear:
	rm -rf build/src/*.o bin/main

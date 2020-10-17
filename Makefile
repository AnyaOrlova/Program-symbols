all: bin/main format


.PHONY:
	clear format all

bin/main: build/src/main.o build/src/symbols.o
	gcc -Wall build/src/main.o build/src/symbols.o -o bin/main

build/src/main.o: src/main.c  src/symbols.h
	gcc -Wall -c src/main.c -o build/src/main.o

build/src/symbols.o: src/symbols.c src/symbols.h
	gcc -Wall -c src/symbols.c -o build/src/symbols.o

bin/test: build/test/main.o build/test/test.o build/src/symbols.o
	gcc -Wall build/test/main.o build/test/test.o build/src/symbols.o -o bin/test

build/test/main.o: thirdparty/ctest.h
	gcc -wall -c test/main.c -o build/test/main.o

build/test/test.o: thirdparty/ctest.h
	gcc -Wall -c test/test.c -o build/test/test.o

format:
	clang-format -i src/main.c src/symbols.h src/symbols.c test/test.c test/main.c

clear:
	rm -rf build/src/*.o build/test/*.o bin/main bin/test

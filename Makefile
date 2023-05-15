all:
	mkdir -p build
	gcc -o build/velosiped src/*.c src/Components/*.c -lm -g -Wall -O3

run:
	./build/velosiped
SOURCE = src/*.c src/Components/*.c
OUTPUT = -o build/velosiped
CFLAGS = -g -Wall -O3
LIBS = -lm -lncurses

all:
	mkdir -p build
	gcc $(OUTPUT) $(SOURCE) $(LIBS) $(CFLAGS)

run:
	./build/velosiped
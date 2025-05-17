CC = gcc
CFLAGS = -Wall -Wextra -std=c99
OBJ = main.o binarytree.o
TARGET = programa

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c binarytree.h
	$(CC) $(CFLAGS) -c main.c

binarytree.o: binarytree.c binarytree.h
	$(CC) $(CFLAGS) -c binarytree.c

clean:
	rm -f $(OBJ) $(TARGET)

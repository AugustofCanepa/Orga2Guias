CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = Guia1

all: $(TARGET)

Guia1: Guia1.o
		$(CC) $(CFLAGS) $^ -o $@

Guia1.o: Guia1.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm *.o $(TARGET)

.PHONY: all clean
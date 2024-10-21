CC = gcc
CFLAGS = -ffreestanding -O2 -Wall -Wextra
LDFLAGS = -nostdlib

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

all: nebula.bin

nebula.bin: $(OBJ)
    $(CC) $(CFLAGS) -o nebula.bin $(OBJ) $(LDFLAGS)

clean:
    rm -f $(OBJ) nebula.bin

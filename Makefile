CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

TARGET = boxforge

SRC = src/main.c \
      src/cli.c \
      src/process.c \
      src/container.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: clean

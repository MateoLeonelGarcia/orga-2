CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = ej14
SRCS = ej14.c list.c type.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

ej14.o: ej14.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS) $(TARGET)

.PHONY: all clean

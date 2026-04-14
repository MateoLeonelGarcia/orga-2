CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = ej16
SRCS = ej16.c list.c type.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS) $(TARGET)

.PHONY: all clean

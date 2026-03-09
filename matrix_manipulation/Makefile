CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = matrix_manipulation
SRCS = Matrix_Manipulation.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c $<

clean:
    rm -f $(TARGET) $(OBJS)

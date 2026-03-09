CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = sales_report
SRCS = Sales_Report.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c $<

clean:
    rm -f $(TARGET) $(OBJS)

CC = gcc
TARGET = my-binaire
INSTALL_DIR = /home/spi-2019
CC_OPTIONS = -g -Wall

SRCS = max.c min.c var.c testall.c
OBJS = $(SRCS:.c=.o)

ifeq ($(DEBUG),yes)
    CC_OPTIONS = -g -Wall
else
    CC_OPTIONS = -O2 -Wall
endif

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CC_OPTIONS) -o $@ $^

max.o: max.c
	$(CC) $(CC_OPTIONS) -c $<

min.o: min.c
	$(CC) $(CC_OPTIONS) -c $<

var.o: var.c
	$(CC) $(CC_OPTIONS) -c $<

test.o: test.c
	$(CC) $(CC_OPTIONS) -c $<

install: $(TARGET)
	cp $(TARGET) $(INSTALL_DIR)

clean:
	rm -f $(OBJS) $(TARGET)
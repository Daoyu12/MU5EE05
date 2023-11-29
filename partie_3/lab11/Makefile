
TARGET = my-binaire
INSTALL_DIR = /home/daoyu
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
	gcc $(CC_OPTIONS) -o $@ $^

max.o: max.c
	gcc $(CC_OPTIONS) -c $<

min.o: min.c
	gcc $(CC_OPTIONS) -c $<

var.o: var.c
	gcc $(CC_OPTIONS) -c $<

test.o: test.c
	gcc $(CC_OPTIONS) -c $<

install: $(TARGET)
	cp $(TARGET) $(INSTALL_DIR)

clean:
	rm -f $(OBJS) $(TARGET)
###...MAKEFILE...###

CC = gcc
CPPFLAGS = -I.
CFLAGS = -W -Wall -ansi -pedantic -g

RM = rm -f

TARGET = hallo
OBJECTS = gruss.o redenverab.o
SOURCES =  $(TARGET).c $(OBJECTS: .o=.c)
HEADERS = $(OBJECTS: .o=.h)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@
	
.PHONY: all clean
all: $(TARGET)
clean:
	$(RM) $(TARGET) $(OBJECTS) $(TARGET).o depend

depend: $(SOURCES) $(HEADERS)
	$(CC) $(CPPFLAGS) -MM $(SOURCES) > $@

$(TARGET) : $(TARGET).o $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@
	
include depend
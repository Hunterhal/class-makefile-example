CC=gcc
CFLAGS=-I.
DEPS = linked_list.h
OBJ = main.o linked_list.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
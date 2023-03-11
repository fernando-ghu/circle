# the object files aren't updated by make!
CC = gcc
CFLAGS = -Wall -g -std=c99
LDFLAGS = -lm
ODIR = obj

_OBJ = circle.o circulararea.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o : %.c
	$(CC) -c -o $@ $< $(CFLAGS)

a : $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS) 



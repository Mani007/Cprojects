CC = gcc
CFLAGS = -Wall -Wextra -g

# Final executable
output: arraypointer.o
	$(CC) arraypointer.o -o output

# Compile main.c → main.o
# main.o: main.c simplestruct.h
# 	$(CC) $(CFLAGS) -c main.c

# Compile affressof.c → arraypointer.o
arraypointer.o: arraypointer.c 
	$(CC) $(CFLAGS) -c arraypointer.c

# Clean build files
clean:
	rm -f *.o output
CC = gcc
CFLAGS = -Wall -Wextra -g

# Final executable
output: enum1.o
	$(CC) enum1.o -o output

# Compile main.c → main.o
# main.o: main.c simplestruct.h
# 	$(CC) $(CFLAGS) -c main.c

# Compile affressof.c → enum1.o
enum1.o: enum1.c 
	$(CC) $(CFLAGS) -c enum1.c

# Clean build files
clean:
	rm -f *.o output
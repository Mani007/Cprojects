CC = gcc
CFLAGS = -Wall -Wextra -g

# Final executable
output: main.o simplestruct.o
	$(CC) main.o simplestruct.o -o output

# Compile main.c → main.o
main.o: main.c simplestruct.h
	$(CC) $(CFLAGS) -c main.c

# Compile simplestruct.c → simplestruct.o
simplestruct.o: simplestruct.c simplestruct.h
	$(CC) $(CFLAGS) -c simplestruct.c

# Clean build files
clean:
	rm -f *.o output
CC = gcc
CFLAGS = -Wall -Wextra -g

# Final executable
output: stringptr.o
	$(CC) stringptr.o -o output

# Compile main.c → main.o
# main.o: main.c simplestruct.h
# 	$(CC) $(CFLAGS) -c main.c

# Compile affressof.c → stringptr.o
stringptr.o: stringptr.c 
	$(CC) $(CFLAGS) -c stringptr.c

# Clean build files
clean:
	rm -f *.o output
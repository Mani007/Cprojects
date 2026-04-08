CC = gcc
CFLAGS = -Wall -Wextra -g

# Final executable
output: addressof.o
	$(CC) addressof.o -o output

# Compile main.c → main.o
# main.o: main.c simplestruct.h
# 	$(CC) $(CFLAGS) -c main.c

# Compile affressof.c → addressof.o
addressof.o: addressof.c 
	$(CC) $(CFLAGS) -c addressof.c

# Clean build files
clean:
	rm -f *.o output
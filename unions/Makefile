CC = gcc
CFLAGS = -Wall -Wextra -g

# Final executable
output: unions.o
	$(CC) unions.o -o output

# Compile main.c → main.o
# main.o: main.c simplestruct.h
# 	$(CC) $(CFLAGS) -c main.c

# Compile affressof.c → unions.o
unions.o: unions.c 
	$(CC) $(CFLAGS) -c unions.c

# Clean build files
clean:
	rm -f *.o output
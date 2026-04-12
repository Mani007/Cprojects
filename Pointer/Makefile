CC = gcc
CFLAGS = -Wall -Wextra -g

# Final executable
output: pointerarth.o
	$(CC) pointerarth.o -o output

# Compile main.c → main.o
# main.o: main.c simplestruct.h
# 	$(CC) $(CFLAGS) -c main.c

# Compile affressof.c → pointerarth.o
pointerarth.o: pointerarth.c 
	$(CC) $(CFLAGS) -c pointerarth.c

# Clean build files
clean:
	rm -f *.o output
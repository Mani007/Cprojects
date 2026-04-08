CC = gcc
CFLAGS = -Wall -Wextra -g

# Final executable
output: pointerandfunc.o
	$(CC) pointerandfunc.o -o output

# Compile main.c → main.o
# main.o: main.c simplestruct.h
# 	$(CC) $(CFLAGS) -c main.c

# Compile affressof.c → pointerandfunc.o
pointerandfunc.o: pointerandfunc.c 
	$(CC) $(CFLAGS) -c pointerandfunc.c

# Clean build files
clean:
	rm -f *.o output
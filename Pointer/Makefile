CC = gcc
CFLAGS = -Wall -Wextra -g

# Final executable
output: arrowoperator.o
	$(CC) arrowoperator.o -o output

# Compile main.c → main.o
# main.o: main.c simplestruct.h
# 	$(CC) $(CFLAGS) -c main.c

# Compile affressof.c → arrowoperator.o
arrowoperator.o: arrowoperator.c 
	$(CC) $(CFLAGS) -c arrowoperator.c

# Clean build files
clean:
	rm -f *.o output
CC = gcc
CFLAGS = -Wall -Wextra -g
output: stackbasic.o
	$(CC) stackbasic.o -o output 

stackbasic.o: stackbasic.c 
	$(CC) $(CFLAGS) -c stackbasic.c
# Clean build files
clean:
	rm -f *.o output
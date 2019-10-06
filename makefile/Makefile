#this target will compile all the files
# all: hello

# hello: main.o function1.o function2.o 
# 	gcc -o hello main.c function1.c function2.c -I .

# main.o: main.c
# 	gcc -c main.c

# function1.o: function1.c
# 	gcc -c function1.c 

# function2.o: function2.c
# 	gcc -c function2.c

# clean:
# 	rm -rf *o hello


#declaring variables
CC=gcc
CFLAGS=-c 

all: hello

hello: main.o function1.o function2.o
	$(CC) main.o function1.o function2.o -o hello

main.o: main.c
	$(CC) $(CFLAGS) main.c

function1.o: function1.c
	$(CC) $(CFLAGS) function1.c 

function2.o: function2.c
	$(CC) $(CFLAGS) function2.c 

clean:
	rm -rf *o hello
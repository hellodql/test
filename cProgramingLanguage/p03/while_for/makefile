.SUFFIXES:.c.o

CC=gcc
SRCS=collection.c	\
	 main.c
OBJS=$(SRCS:.c=.o)
EXEC=main

start:$(OBJS)
	$(CC) $(OBJS) -o $(EXEC)
	@echo '^_^^_^^_^^_^^_^^_^^_^^_^ make OK ^_^^_^^_^^_^^_^^_^^_^^_^' 

.c.o:
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJS) *.o

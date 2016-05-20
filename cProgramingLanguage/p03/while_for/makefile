.SUFFIXES:.c.o

CC=gcc
SRCS=myatoi.c
OBJS=$(SRCS:.c=.o)
EXEC=hello

start:$(OBJS)
	$(CC) $(OBJS) -o $(EXEC)
	@echo '^_^^_^^_^^_^^_^^_^^_^^_^ make OK ^_^^_^^_^^_^^_^^_^^_^^_^' 

.c.o:
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJS) *.o

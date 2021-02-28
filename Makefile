COMPILER=gcc

.all: compile

compile:
	$(COMPILER) -c -g clog.c

clean:
	rm -rf *.o

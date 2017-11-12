all: demo_string.c
	gcc -o run demo_string.c
run: all
	./run
clean:
	rm -f *~ *.o *.h# run

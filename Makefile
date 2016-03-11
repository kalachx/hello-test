hello.exe: hello.o
	cc -o $@ $<
 
hello.o: hello.c
	cc -c -o $@ $<
 
.PHONY: clean
 
clean:
	rm -f hello.exe hello.o

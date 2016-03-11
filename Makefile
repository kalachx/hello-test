hello.exe: hello.o
	gcc -o $@ $<
 
hello.o: hello.c
	gcc -c -o $@ $<
 
.PHONY: clean
 
clean:
	rm -f hello.exe hello.o

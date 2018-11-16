all:hello program

hello:hello.c
	cc -o hello hello.c

libfoo.a:bill.c fred.c
	cc -c bill.c fred.c
	ar crv libfoo.a bill.o fred.o
	ranlib libfoo.a
	nm -s libfoo.a

program: libfoo.a program.c
	cc -c program.c 
	cc -o program program.o bill.o 
	ldd program
	cc -o program program.o libfoo.a
	ldd program
	cc -o program program.o -lfoo -L.
	ldd program

clean:
	rm hello program
	rm *.o
	rm *.a

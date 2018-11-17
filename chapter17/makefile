source=$(wildcard *.c)

target=$(source:.c=)

all:$(target)

%:%.c
	gcc -o $@ $^ -ggdb 

clean:
	rm $(target)



source=$(wildcard *.c)

target=$(source:.c=)

all:$(target)

%:%.c
	gcc -o $@ $^ -ggdb  -lm

clean:
	rm $(target)

source=$(wildcard *.c)

target=$(source:.c=)

all:$(target)

dbm1:dbm1.c
	gcc -o $@ $^ -ggdb  -lgdbm -lgdbm_compat

dbm2:dbm2.c
	gcc -o $@ $^ -ggdb  -lgdbm -lgdbm_compat

%:%.c
	gcc -o $@ $^ -ggdb 


clean:
	rm $(target)


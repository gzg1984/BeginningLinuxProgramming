source=block.c  mmap.c  print1.c  print2.c  read.c stdio.c  system.c  write.c
target=$(source:.c=)

all:$(target)

%:%.c
	gcc -o $@ $^ -ggdb


clean:
	rm $(target)

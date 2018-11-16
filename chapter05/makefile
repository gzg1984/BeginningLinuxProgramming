source= badterm.c  menu2.c  menu4.c  password.c  sizeterm.c kbhit.c    menu1.c   menu3.c  menu5.c  
target=$(source:.c=)

all:$(target)

badterm:badterm.c
	gcc -o $@ $^ -I/usr/include/ncurses -lncurses -ggdb

sizeterm:sizeterm.c
	gcc -o $@ $^ -I/usr/include/ncurses -lncurses -ggdb

menu5:menu5.c
	gcc -o $@ $^ -I/usr/include/ncurses -lncurses -ggdb

%:%.c
	gcc -o $@ $^ -ggdb


clean:
	rm $(target)

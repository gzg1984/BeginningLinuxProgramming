source=ipmode.c multiw1.c subscl.c color.c  keypad.c  moveadd.c  pad.c      screen1.c app/curses.c

target=$(source:.c=)

all:$(target)

%:%.c
	gcc -o $@ $^ -ggdb -lcurses


clean:
	rm $(target)

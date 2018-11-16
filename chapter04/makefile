source= argopt.c  environ.c  hostget.c  strftime.c  user.c args.c    envtime.c  limits.c syslog.c ctime.c   gmtime.c   logmask.c  showenv.c  tmpnam.c
target=$(source:.c=)

all:$(target)

limits:limits.c
	cc -o limits limits.c -lm
%:%.c
	gcc -o $@ $^ -ggdb

clean:
	rm $(target)


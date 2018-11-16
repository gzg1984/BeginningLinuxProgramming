#Building require: gdbm-devel
all:	application

app_ui.o: app_ui.c cd_data.h
	gcc -pedantic -Wall -ansi -g -c app_ui.c 

access.o: access.c cd_data.h
	gcc -pedantic -Wall -ansi -g -c access.c

application:	app_ui.o access.o
	gcc -o application -pedantic -Wall -ansi -g app_ui.o access.o -lgdbm -lgdbm_compat

clean:
	-rm application *.o
	-rm cdc_data.pag cdt_data.pag cdc_data.dir cdt_data.dir


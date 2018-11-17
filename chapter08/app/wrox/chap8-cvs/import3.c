/*
   This is an important file for managing the project.
   It implements the canoncial "Hello World" program.

   Filename: $RCSfile: import3.c,v $
*/

#include <stdlib.h>
#include <stdio.h>

static char *RCSinfo = "$Id: import3.c,v 1.1.1.1 2009/04/22 06:30:36 root Exp $";

int main()
{
    printf("Hello World\n");
    printf("This is an extra line added later\n");
    printf("This file is under RCS control.  Its ID is \n%s\n", RCSinfo);
    exit (EXIT_SUCCESS);
}
 
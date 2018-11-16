#include <stdio.h>
#include <stdlib.h>
#include <term.h>
#include <ncurses.h>

int main()
{
    setupterm("unlist", fileno(stdout), (int *)0);
    printf("Done.\n");
    exit(0);
}

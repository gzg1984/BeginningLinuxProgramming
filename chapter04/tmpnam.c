#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv)
{
	/**
    char tmpname[L_tmpnam];
    char *filename; 
    FILE *tmpfp;
    filename = tmpnam(tmpname);
    printf("Temporary file name is: %s\n", filename);
    tmpfp = tmpfile();
    if(tmpfp)
        printf("Opened a temporary file OK\n");
    else
        perror("tmpfile");
		**/
	int tmpfd= mkstemp("/tmp/aaXXXXXX");
    if(tmpfd >= 0 )
	{
        printf("Opened a temporary file OK\n");
	}
    else
	{
        perror("tmpfile");
	}
    exit(0);
}

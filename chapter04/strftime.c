#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char** argv)
{
    struct tm *tm_ptr, timestruct;
    time_t the_time;
    char buf[256];
    int result;

    (void) time(&the_time);
    tm_ptr = localtime(&the_time);
    strftime(buf, 256, "%A %d %B, %I:%S %p", tm_ptr);

    printf("strftime gives: %s\n", buf);
    strcpy(buf,"Mon 26 July 1999, 17:53 will do fine");

    printf("calling strptime with: %s\n", buf);
    tm_ptr = &timestruct;

    result = strptime(buf,"%a %d %b %Y, %R", tm_ptr);
    printf("strptime consumed up to: %s, result is %d\n", buf,result);

    printf("strptime gives:\n");
    printf("date: %02d/%02d/%02d\n", 
			tm_ptr->tm_year, tm_ptr->tm_mon+1, tm_ptr->tm_mday);
    printf("time: %02d:%02d\n", tm_ptr->tm_hour, tm_ptr->tm_min);
    exit(0);
}

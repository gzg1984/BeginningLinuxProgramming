#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

double my_sqrt(double x)
{
    assert(x >= 0.0);
    return sqrt(x);
}

int main()
{
    printf("sqrt +2 = %g\n", my_sqrt(2.0)); 
    printf("sqrt -2 = %g\n", my_sqrt(-2.0));
    exit(0);
}

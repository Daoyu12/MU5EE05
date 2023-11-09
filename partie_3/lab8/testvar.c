#include <stdio.h>
#include "var.h"

int main()
{
    int t[] = {2,5,7,2,9};
    int n = sizeof(t)/sizeof(t[0]);
    float var;
    variance(t,n,&var);
    printf("la valeur de variance est %f\n",var);

    return 0;
}
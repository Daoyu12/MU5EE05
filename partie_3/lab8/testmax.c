#include <stdio.h>
#include "max.h"

int main()
{
    int t[] = {2,5,7,2,9};
    int n = sizeof(t)/sizeof(t[0]);
    int max;
    maxim(t,n,&max);
    printf("la valeur maximale est %d\n",max);

    return 0;
}



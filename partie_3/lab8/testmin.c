#include <stdio.h>
#include "min.h"

int main()
{
    int t[] = {2,5,7,2,9};
    int n = sizeof(t)/sizeof(t[0]);
    int min;
    minim(t,n,&min);
    printf("la valeur minimale est %d\n",min);

    return 0;
}
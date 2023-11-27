#include <stdio.h>
#include "max.h"
#include "min.h"
#include "var.h"
#include <math.h>


int main()
{
    int t[] = {2,5,7,2,9};
    int n = sizeof(t)/sizeof(t[0]);
    int max;
    int min;
    float var;
    maxim(t,n,&max);
    minim(t,n,&min);
    variance(t,n,&var);
    
    printf("la valeur maximale est %d\n",max);
    printf("la valeur minimale est %d\n",min);
    printf("la valeur de variance est %f\n",var);
    float VarianceArrondieEnHaut = ceil(var);
    float VarianceArrondieEnBas = floor(var);
    printf("la variance arrondie vers le haut est %f\n",VarianceArrondieEnHaut);
    printf("la variance arrondie vers le bas est %f\n",VarianceArrondieEnBas);

    return 0;
}
#include "var.h"

void variance (int t[], int n, float * var)
{
    float somme=0;
    for (int i = 0;i < n;i++)
    {
        somme = somme + t[i];
    }
    float mean = somme/n;
    *var = 0;
    for (int i = 0;i < n;i++)
    {
        *var=*var+(t[i]-mean)*(t[i]-mean)/(n-1);
    }

}


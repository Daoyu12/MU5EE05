#include <stdio.h>
#include <stdlib.h>
 
 
int main()
{
    int a;
    int b;
    int addition;
 
    printf("Veuillez rentrer le 1er nombre : \n");
    scanf("%d", &a);
 
    printf("Veuillez rentrer le deuxième nombre : \n");
    scanf("%d", &b);
 
    addition = a+b;
 
    printf ("La somme de vos deux nombres est : %d",addition);
 
    return 0;
}

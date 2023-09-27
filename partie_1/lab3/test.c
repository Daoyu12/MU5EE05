
#include <stdio.h>

int main()
{
   int x, y, produit;
   
   printf("Entrez deux nombres \n");
   scanf("%d%d", &x, &y);
   
   produit = x*y;
   
   printf("Le produit des deux entiers est = %d\n", produit);
   
   return 0;
}
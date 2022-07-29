#include <stdio.h>
#include <stdlib.h>

int SumOfElement(int[], int);

int main()
{
   int n = 5;
   int dizi [5] ={6,52,88,14,62};
   int toplam= SumOfElement(dizi, n-1);
   printf("Toplam = %d ", toplam);

   return 0;
}



int SumOfElement(int dizi[], int n)
{
    if(n==0)
        return dizi[0];
    return dizi[n] + SumOfElement(dizi, n-1);
}

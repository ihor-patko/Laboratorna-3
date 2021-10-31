#include <stdio.h>
#include <stdlib.h>

void func(){
     int a,b;
     int * pA = &a;
     int * pB = &b;
     printf("Chyslo maye buty menshe nizh 2095000!\n");
     printf("Vvedit` pershe chyslo: ");
     scanf("%d",pA); 
     printf("Vvedit` druhe chyslo: ");
     scanf("%d",pB); 
     
     int arr[*pB];
     
     if ( *pB > *pA)
        {
         arr[*pA] = *pA;
         arr[*pB] = *pB;
         for (int i = 1 ; *pA <= *pB ; *pA += i)
         {
             arr[*pA]= *pA;
             if ((*pA % 10 != 5) & (*pA % 100 < 50 || *pA % 100 > 59)//Checking the presence of the number 5 in the entered number a.
             & (*pA % 1000 < 500 || *pA % 1000 > 599)
             & (*pA % 10000 < 5000 || *pA % 10000 > 5999)
             & (*pA % 100000 < 50000 || *pA % 100000 > 59999)
             & (*pA % 1000000 < 500000 || *pA % 1000000 > 599999))
             printf("%d ", arr[*pA]);
             else
             continue;
          }
         }
     
     else 
        printf("Druhe chyslo maye buty bil`she nizh pershe!");
        system("pause");
}

int main() 
{
    func();
}

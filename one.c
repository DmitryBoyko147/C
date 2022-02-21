#include <stdio.h>
#include <stdlib.h>

int main()
{
   double finish;
   int sum, number, n;
   sum=0;
   number=0;
   printf("Enter sequence\n");
   while((n=scanf("%lf",&finish))&(finish!=EOF)){
    sum=sum+finish;
    number++;
   }
   printf("Number = %d. Sum = %d.\n",number, sum);
}

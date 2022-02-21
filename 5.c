#include <stdio.h>
#include <stdlib.h>

int main()
{
   double next, min;
   int i, mini;
   mini=0;
   i=0;
   printf("Enter a sequence\n");
   while((scanf("%lf",&next))&(next!=EOF)){
    i++;
    if (i==1){
        min = next;
        mini=i;
    }
    else {
        if (next<min){
            min = next;
            mini=i;
        }
    }
   }
   printf("There are %d elements before first min element",mini-1);
   return 0;
}

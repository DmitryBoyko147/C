#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a;
    printf("Input a number\n");
    n=scanf("%d",&a);
    if (n!=1){
        printf("Error:wrong input");
        return 1;
    }
    if (a%2==1){
        printf("Number is odd");
        return 0;
    }
    printf("Number is even");
    return 0;
}

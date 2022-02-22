#include <stdio.h>
#include <stdlib.h>
int factorial(int x){
    if (x<=1) {
        printf("%d!=1\n",x);
        return 1;
    }
    int f=x*factorial(x-1);
    printf("%d!=%d\n",x,f);
    return f;
}
int main()
{
    int x,n;
    printf("Enter integer\n");
    n=scanf("%d",&x);
    if (n!=1){
        printf("Wrong input");
        return 1;
    }
    factorial(x);
    return 0;
}

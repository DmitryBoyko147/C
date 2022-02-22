#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isprime(int x){
    if (x==1){
        return 0;
    }
    int a=ceil(sqrt(x));
    if (a==x){
        a=a-1;
    }
    int i;
    for (i=2; i<=a; i++){
        if (x % i==0){
            return 0;
        }
    }
    return 1;
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
    if (isprime(x)==0){
        printf("%d is not prime",x);
    }
    else{
        printf("%d is prime",x);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y){
    int a=x;
    int b=y;
    while((a!=0)&(b!=0)){
        if (a>b){
            a=a % b;
        }
        else{
            b=b % a;
        }
    }
    if (a>0){
            return a;
    }
    else{
            return b;
    }
}

int main()
{
    int x,y,n;
    printf("Enter 2 integers:\n");
    n=scanf("%d %d", &x, &y);
    if (n!=2){
        printf("Wrong input");
        return 1;
    }
    printf("GCD(%d, %d)=%d",x,y,gcd(x,y));
    return 0;
}

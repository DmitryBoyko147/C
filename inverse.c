#include <stdio.h>
#include <stdlib.h>
int inverse(int x){
    int a=x;
    int b=0;
    while(a!=0){
        b=b*10+a % 10;
        a=a / 10;
    }
    return b;
}
int main()
{
    int x, n;
    printf("Enter integer\n");
    n=scanf("%d",&x);
    if (n!=1){
        printf("Wrong input");
        return 1;
    }
    printf("%d",inverse(x));
    return 0;
}

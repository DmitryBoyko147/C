#include <stdio.h>
#include <stdlib.h>

int main()
{
    int next, maxn, n, i;
    n=0;
    maxn=0;
    i=0;
    printf("Enter a sequence\n ");
    while((scanf("%d",&next))&(next!=EOF)){
    if (next % 2 ==0){
        n++;
    }
    if (next % 2 ==1){
        if (n>maxn){
            maxn=n;
        }
        n=0;
    }
    }
    if (n>maxn){
        maxn=n;
    }
    printf("Max sequence of even elements contains %d elements",maxn);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double k, finish;
    int n, i, j, t;
    printf("Enter k\n");
    n=scanf("%lf",&k);
    if (n!=1){
        printf("Wrong input");
        return 1;
    }
    i=0;
    j=0;
    t=1;
    while((scanf("%lf",&finish))&(finish!=EOF)){
        i++;
        if ((finish>k)&(t==1)) {
            j=i;
            t=0;
        }
    }
    if (j==0){
        printf("All numbers <= k");
        return 0;
    }
    printf("%d",j);
}

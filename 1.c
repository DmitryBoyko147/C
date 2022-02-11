#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, number, i, sum, member;
    printf("Input number of sequence members:\n");
    n=scanf("%d",&number);
    if (n!=1)
    {
        printf("Error:wrong input\n");
        return 1;
    }
    sum=0;
    for (i=1; i<=number; i++){
        printf("Input member number %d:\n",i);
        n=scanf("%d",&member);
        if (n!=1)
        {
            printf("Error:wrong input");
            return 2;
        }
        sum=sum+member;
    }
    printf("sum = %d", sum);
    return 0;
}

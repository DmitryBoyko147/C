#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, number, i, min, max, member;
    printf("Input number of digits:\n");
    n=scanf("%d",&number);
    if (n!=1)
    {
        printf("Error:wrong input\n");
        return 1;
    }
    printf("Input digit number 1:\n");
    n=scanf("%d",&member);
    if (n!=1)
    {
        printf("Error:wrong input");
        return 2;
    }
    min=member;
    max=member;
    for (i=2; i<=number; i++)
    {
       printf("Input digit number %d:\n",i);
        n=scanf("%d",&member);
        if (n!=1)
        {
            printf("Error:wrong input");
            return 2;
        }
        if (member>max)
        {
            max=member;
        }
        if (member<min)
        {
            min=member;
        }
    }
    printf("min = %d, max=%d",min,max);
    return 0;
}

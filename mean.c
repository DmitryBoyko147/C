#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, a2, a3, a4, a5;
    int n;
    n=scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
    if (n!=5) {
        printf("Error: wrong input");
        return 1;
    }
    printf("Mean value = %.2f",(a1+a2+a3+a4+a5)/5.0);
    return 0;
}

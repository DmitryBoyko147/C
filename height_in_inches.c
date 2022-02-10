#include <stdio.h>

int main()
{
    double h;
    int n;
    printf("Enter your height in cm\n");
    n=scanf("%lf",&h);
    if (n!=1) {
        printf("Error:wrong input");
        return 1;
    }
    printf("Your height in inches equals %.2f",h/2.54);
    return 0;
}

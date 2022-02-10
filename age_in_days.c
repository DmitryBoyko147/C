#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    int n;
    printf("Enter your age in years\n");
    n=scanf("%d",&age);
    if (n!=1){
        printf("Error:wrong input");
        return 1;
    }
    printf("Your age in years equals %d. Your age in days equals %d.\n",age, age*365);
    return 0;
}

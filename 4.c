#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    double current, next;
    printf("Enter a sequence\n");
    i=0;
    n=0;
    while ((scanf("%lf",&next))&(next!=EOF)){
        i++;
        if (i==1){
            current=next;
        }
        else {
            if (next>current){
                printf("index of element is %d\n",i);
                n++;
            }
            current=next;
        }
    }
    printf("Number of elements more than their left neighbor = %d",n);
    return 0;
}

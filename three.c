#include <stdio.h>
#include <stdlib.h>

int main()
{
    double current, next;
    int i, t;
    i=0;
    t=1;
    printf("Enter a sequence\n");
    while((scanf("%lf",&next))&(next!=EOF)){
        i++;
        if (i==1){
            current=next;
        }
        else {
            if ((current>=next) & (t==1)){
                t=0;
            }
            current=next;
        }

    }
    if (t==1){
        printf("Sequence is ascending");
    }
    else {
        printf("Sequence is not ascending");
    }
    return 0;

}

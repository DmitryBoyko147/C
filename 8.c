#include <stdio.h>
#include <stdlib.h>

int main()
{
    int current, next, length, i;
    printf("Enter a sequence\n");
    length=1;
    i=0;
    while ((scanf("%d", &next))&(next!=EOF)){
    i++;
    if (i==1){
        current=next;
    }
    else {
        if (next>current){
            length++;
        }
        else {
            printf("length = %d\n",length);
            length=1;
        }
        current=next;
    }
    }
    printf("length = %d",length);
    return 0;
}

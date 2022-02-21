#include <stdio.h>
#include <stdlib.h>

int main()
{
    int current, next, odd, even, i;
    printf("Enter a sequence\n");
    odd=0;
    even=0;
    i=0;
    while((scanf("%d",&next))&(next!=EOF)){
        i++;
        if (i==1){
            current=next;
            if (next % 2==1){
                odd++;
            }
            else {
                even++;
            }
        }
        else {
            if (next % 2 ==1){
                if (current % 2==1){
                    odd++;
                }
                else {
                    printf("Even sequence = %d\n", even);
                    even=0;
                    odd=1;
                }
            }
            if (next % 2 ==0){
                if (current % 2==0){
                    even++;
                }
                else {
                    printf("Odd sequence = %d\n", odd);
                    odd=0;
                    even=1;
                }
            }
            current = next;
        }
    }
    if (odd>0) {
        printf("Odd sequence = %d\n", odd);
    }
    else {
        printf("Even sequence = %d\n", even);
    }
    return 0;
}

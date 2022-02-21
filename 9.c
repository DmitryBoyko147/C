#include <stdio.h>
#include <stdlib.h>

int main()
{
    double next, current;
    int length, maxlength , i, maxi;
    printf("Enter a sequence\n");
    i=0;
    maxi=0;
    length=0;
    maxlength=0;
    while((scanf("%lf",&next))&(next!=EOF)){
        i++;
        if (i==1){
            current=next;
            maxi=1;
            length=1;
            maxlength=1;
        }
        else {
            if (current == next){
                length++;
            }
            else {
                if (length>maxlength){
                    maxlength=length;
                    maxi=i-1;
                }
                length=1;
            }
            current=next;
        }
    }
    if (length>maxlength){
            maxlength=length;
            maxi=i;
        }
        printf("Length of the longest sequence with equal numbers = %d. First index = %d.", maxlength, maxi-maxlength+1);
        return 0;
}

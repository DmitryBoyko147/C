#include <stdio.h>
#include <stdlib.h>

int *countSymbols(char *str)
{
    int countS = 0;
    int countT = 0;
    int countN = 0;
    while (*str)
    {
        if(*str == ' ') countS++;
        if(*str == '\t') countT++;
        if(*str == '\n') countN++;
        str++;
    }
    int *res= malloc(sizeof(int) * 3);
    res[0]=countS;
    res[1]=countT;
    res[2]=countN;
    return res;
}


int main() {

    char str[] = "Hello,\n world!\t \t";

    int *res= countSymbols(str);
    printf("Количество пробелов: %d\n",res[0]);
    printf("Количество знаков табуляции: %d\n",res[1]);
    printf("Количество переносов строки: %d\n",res[2]);

    return 0;
}

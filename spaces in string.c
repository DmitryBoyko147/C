#include <stdio.h>
#include <stdlib.h>
int spaces(const char *str){
    int n=0;
    int i=0;
    while (str[i]!='\0'){
        if (str[i]==' '){
            n++;
        }
        i++;
    }
    return n;
}
int main()
{
    char str[]="Hello world ! ! ! ! !";
    printf("String '%s' contains %d spaces",str, spaces(str));
    return 0;
}

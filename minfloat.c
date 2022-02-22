#include <stdio.h>
#include <stdlib.h>
double minfloat(double x, double y, double z){
    int min = x;
    if ((x<=y)&(x<=z)){
        return x;
    }
    if (y<=z){
        return y;
    }
    return z;

}
int main()
{
    double x, y, z;
    int n;
    printf("Enter 3 floats\n");
    n=scanf("%lf %lf %lf",&x,&y,&z);
    if (n!=3){
        printf("Wrong input");
        return 1;
    }
    printf("min(%f, %f, %f)=%f",x,y,z,minfloat(x,y,z));
    return 0;
}

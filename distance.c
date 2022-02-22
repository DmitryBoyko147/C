#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main()
{
    double x1, y1, x2, y2;
    int n;
    printf("Enter coordinates of the 1st point:\n");
    n=scanf("%lf %lf",&x1,&y1);
    if (n!=2){
        printf("Wrong input");
        return 1;
    }

    printf("Enter coordinates of the 2nd point:\n");
    n=scanf("%lf %lf",&x2,&y2);
    if (n!=2){
        printf("Wrong input");
        return 1;
    }

    printf("Distance between points (%f, %f) and (%f, %f) = %0.2f",x1,y1, x2, y2, distance(x1,y1,x2,y2));

    return 0;
}

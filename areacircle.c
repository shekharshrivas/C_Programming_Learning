#include <stdio.h>
#define pi 3.14

main(){
    float radius, area;
    float myfun(float radius);
    printf("Enter the radius of circle\n");
    scanf("%f", &radius);
    area = myfun(radius);
    printf("area of circle with radius %f is %f\n", radius, area);
}

float myfun(float radius){
    float a;
    a = pi * radius * radius;
    return a;
}
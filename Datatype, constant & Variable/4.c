// Calculate the area of a circle given the radius (constant value for pi)

#include<stdio.h>

void main(){
    float r,a;

    const float p=3.14159;

    printf("Enter the rasdis of circle=");
    scanf("%f",&r);

    a=p*r*r;

    printf("Area of the circle= %f",a);
}
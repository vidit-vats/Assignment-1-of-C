#include <stdio.h>
#define pi 3.14
void main ()
{
    float r,A;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    A=pi*r*r;
    printf("The Area of circle is %.2f having the radius %.0f\n",A,r);
}
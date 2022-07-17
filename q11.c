#include <stdio.h>
void main ()
{
    int h,m;

    printf("Enter hour and minutes in HH:MM format: ");
    scanf("%d:%d",&h,&m);
    

    printf("%d:%d is converted to: %d hours and %d minutes",h,m,h,m);

}
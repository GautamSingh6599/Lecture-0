//Calculating area of a Circle.

#include<stdio.h>
#include<conio.h>

main(){
    float Area, Radius;
    printf("Enter the radius of your Circle: ");
    scanf("%f", &Radius);
    Area = 3.14 * Radius * Radius;
    printf("The area of your circle is: %f", Area);
    getch();
}

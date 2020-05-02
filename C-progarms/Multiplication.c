//My first multiplication program.

#include<stdio.h>
#include<conio.h>

main(){
    int a ,b ,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    c = a * b;
    printf("The multiplication is : %d",c);
    getch();
}

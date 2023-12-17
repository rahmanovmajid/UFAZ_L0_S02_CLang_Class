#include<stdio.h>

int main (void) {

int a,b,A,P;

printf("Enter length: ");
scanf("%d",&a);
printf("Enter width: ");
scanf("%d",&b);

P = 2*(a+b);
A= a*b;

printf("Your perimeter is %d",P);
printf("Your Area is %d",A);

return 0;

}

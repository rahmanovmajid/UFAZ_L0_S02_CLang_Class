#include<stdio.h>

int main (void) {

int a,b,rem;

printf("Enter integer a and b: ");
scanf("%d %d",&a,&b);

rem = a % b;

printf("The remainder is %d\n",rem);

return 0;

}

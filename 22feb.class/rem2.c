#include<stdio.h>

int main (void) {

float a,b;
int rem;

printf("Enter integer a and b: ");
scanf("%f %f",&a,&b);

rem = a % b;
div = a / b;
flo = (float) a / b;
printf("The remainder is %d\n",rem);
printf("The div is %f",div);
printf("The flo is %f",flo);

return 0;

}

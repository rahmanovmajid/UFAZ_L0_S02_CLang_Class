#include <stdio.h>
#include <math.h>
// a person invests 1000.00 in a savings account yield 5% interest.assuming that allinterest is left on deposit in the accound,
//formula z
// pow (8.0,3) x=double at least float x^y,#include <math.h> when compiling at the end "-lm"
int main (void){
double p=1000.00,r=0.05,a=0.0,c=0.0;
float n;
for(n=1;n<=10;n+=1){
c=pow((1+r),n);
a=p*c;

printf("your account is %lf for %f th year\n",a,n);
}
return 0;}

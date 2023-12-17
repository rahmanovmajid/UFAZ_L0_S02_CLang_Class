/*
A Person invests $1000.00 in a savigs account yielding 5% interest.
Assuming that all interest is left on deposit in the account, calculate and print the amount of money in the account at the end of each year for 10 years.Use the following formula for determining these amounts.

a = p*(1+r)^n
p is the original amount of invest
r is the annual interest rate
n is the number of years
a is the amount on deposit at the end of the nth year

*/

#include<stdio.h>
#include<math.h>

int main() {

double p=1000.0,r=0.05;
int n=0;

printf("Your invest is $%.3f\n",p);

for ( n = 1 ; n <= 10 ; n++ ) 
{
	a=p*pow((1+r),n);
	printf("Your amount of money in the bank at %dth year, is $%.3f\n",n,p);
	printf("Your amount on deposit at the end of the %dth year, is %.3f\n\n",n,a);
	
}

return 0;

}


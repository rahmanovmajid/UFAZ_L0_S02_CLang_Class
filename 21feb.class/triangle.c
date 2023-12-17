/*
A C program that takes three values of the sides of the triangle and says which type of triangle is it.
*/

#include<stdio.h>

int main (void) {

int a,b,c;

printf("Give the three sides: ");
scanf("%d %d %d",&a,&b,&c);

if ( a + b < c || a + c < b || b + c < a )
{
	print("SEHVLIK!!!!");
}
else {

if ( a == b && a != c && b != c )
{
	printf("It's Isoscales");
else if ( a == b && b == c && a == c )
{
	printf("It's Equiliaterial");
}

else if ( (a*a+b*b) == c*c )
{
	printf("It's Right Angled Triangle");
}
else if ( (a*a+b*b) == c*c && a == b )
{
	printf("It's 45 degreed right angled Triangle");
}
else {
	printf("It's not that special triangle");
}
}
return 0;

} 

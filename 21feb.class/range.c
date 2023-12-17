/*
Write a program that gets from the user the range, and the then prints average of given numbers in floating format by precision with three digits.
*/


#include<stdio.h>
int main () {
int a;
int b;
float avg=0;
int c;


printf("Set the last number: ");
scanf("%d",&a);

printf("Set the first number: ");
scanf("%d",&b);

c=a-b+1;

while ( a >= b ) {
avg += a;
a--;
}

avg /= c;

printf("Qaqas cox uzatma, your average is %.3f\n",avg);

return 0;

}


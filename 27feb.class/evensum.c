#include<stdio.h>

int main () {

int sum = 0 ;
int number;

for ( number = 2 ; number <= 100 ; number += 2 )
{
	sum += number;
}

printf(" %d\n ",sum);
return 0;

}

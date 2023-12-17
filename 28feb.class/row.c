/*
This programme will print greater than or less than sign in 10 rows by checking if the column is divisible by 2 or not.
if it's divisible, then print less than sign, otherwise 
print greater than sign.10 characters must be in each row
*/


#include<stdio.h>

int main() {

int row = 10;
int column;

while ( row >= 1) 
{
	column = 1;
	while ( column <= 10 ) 
	{
		printf("%s",row % 2 ? "<" : ">");
		column++;
	}
row--;
printf("\n");

}

return 0;

}

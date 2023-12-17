/*
This programme takes 2 numbers in the range of 10 and 20 and gives us @ symbol where is columns defined by y and characters in each column defined by x;
*/

#include<stdio.h>

int main() {

int x,y,i,j;

do {
printf("Enter 2 integers in the range of 10-20");
scanf("%d %d",&x,&y);
}
while ( x > 20 || y > 20 );




for (i = 1 ; i <= y ; i++ ) 
{
	for ( j = 1 ; j <= x ; j++ ) 
	{
		printf("@");
	}
printf("\n");
}


return 0;

}

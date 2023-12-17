#include<stdio.h>

int main() {

int num,i,avg,sum=0;


for ( i = 0 ; i < 10 ; i++ )
{
	printf("Enter the grades: ");
	scanf("%d",&num);
	sum += num;
}
	avg /= 10;

printf("This is the average of class %d",avg);

return 0;

}




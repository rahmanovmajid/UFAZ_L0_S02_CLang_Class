#include<stdio.h>

int main(void){
	
	int i;

	for ( i = 1 ; i <= 10 ; i++ )
	{
		if ( i==3 ) continue;
		if ( i==7 ) break;
		printf(" count i = %d , ok\n ",i);
	}

	return 0;
	
}

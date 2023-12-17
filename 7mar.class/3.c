#include<stdio.h>

int main(void) {

int x;


for ( x = 1 ; x <= 10 ; x++ )
{
	if ( x == 4 ) {
	break;
	}
printf("%d\n",x);

}

printf("Broke out of loop at x = %d\n",x);

return 0;

}

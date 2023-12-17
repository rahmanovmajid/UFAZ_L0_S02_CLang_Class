/*
The program gives ******* if counter is not divisible by 2,
but also gives +++++++ when it is.
Here we have CONDITION inside "printf()" command.
*/


#include<stdio.h>

int main() {

int c=1;

while ( c <= 10 ) {

printf("%s\n", c % 2 ? "*******" : "+++++++" );
c++;

}

return 0;

}

/*
The condition inside "printf()" command is actually the same
thing like mentioned below:

if ( c % 2 ) {
	printf("*******\n");
}
else { 
	printf("+++++++\n");
}
*/

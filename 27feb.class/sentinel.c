/*
Takes grades and sentinel value
*/

#include<stdio.h>

int main(void) {

float avg=0;
int gr,c=0;
int a;


printf("Start entering your grades one by one.\n");
scanf("%d",&gr);
if ( gr == -1 ) {
printf("Average is %d\n",gr);
}
else {
while ( gr != -1 ) {
c++;
avg += gr;
scanf("%d",&gr);
}


avg=(float)avg/c;


printf("Your average is %.2f\n",avg);
}

return 0;

}




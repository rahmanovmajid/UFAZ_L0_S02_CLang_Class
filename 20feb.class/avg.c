#include<stdio.h>

int main(void) {

int c=1,grade,avg;

while ( c <= 10 ) {

printf("Give the grade: );
scanf("%d",&grade);
avg += grade;
c++;

}

avg /= 10;

printf("The average is %d",avg);

return 0;

}




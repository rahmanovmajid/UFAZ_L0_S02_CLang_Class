#include<stdio.h>

int main (void) {

int sc;

printf("Enter the score: ");
scanf("%d",&sc);

if ( sc >= 90 ) {
printf("A");
}
else if ( sc 90 >= sc && sc >= 70) {
printf("B");
}
else {
printf("C");
}
return 0;

}


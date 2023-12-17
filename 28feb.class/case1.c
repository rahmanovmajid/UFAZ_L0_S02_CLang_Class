#include<stdio.h>

int main(void) {

char c;

c=getchar(); /*This line is used instead of scanf function.Will get a character from the user*/

switch(c) {
case 'A':
case 'a':
printf("You just give A or a\n");
break;
case 'B':
case 'b':
printf("You just give B or b\n");
break;
case 'C':
case 'c':
printf("You just give C or c\n");
break;
case default:
printf("You did not respect the other 3 cases.\n");
break;
}

return 0;

}


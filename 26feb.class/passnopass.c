#include<stdio.h>

int main () {

int reply;
int c = 1;
int pass=0,nopass=0;

while ( c <= 10 ) {
printf("Did %dth child pass?\n",c);
printf("Say YES(1) or NO(2)\n");
scanf("%d",&reply);
if ( reply == 1 ) {
pass=pass+1;
}
else {
nopass=nopass+1;
}

c=c+1;
}

printf("The number of student PASSED is %d\n",pass);
printf("The number of students NOT PASSED is %d\n",nopass);
printf("&s\n", pass >= 8 ? "BONUS!" : "OUPS!");

return 0;

}

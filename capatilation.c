#include <stdio.h>
int main (){
char c;
printf("Enter the upper case letter: ");
scanf("%c",&c);
char r=c+32;//use ascii value of the character
printf("Lower case letter of %c: %c",c,r);
return 0;
// a=97;
//A = 65;

}

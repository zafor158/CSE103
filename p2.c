#include <stdio.h>
 int main (){
 int digit;
 int x,y;
 printf("Enter 4 digits integer: ");
 scanf("%d",&digit);
 x=digit/100;
 y=digit%100;
 printf("%d %d",x,y);
 if(x>y)printf("\nDifference between fisrt and last two digit: %d",x-y);
 else printf("\nDifference between fisrt and last two digit: %d",y-x);
 return 0;
}

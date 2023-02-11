#include <stdio.h>
int main(){
int *p1,*p2,sum=0;
int x=10,y=20;
p1=&x;//6422028
p2=&y;
sum=*p1+*p2;
printf("%d ",sum);
printf("\n%d ",*p1);//*(6422028)=10




}

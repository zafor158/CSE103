#include <stdio.h>
int cal_sum(int a,int b,int c){
int sum=0;
sum=a+b+c;
return sum;


}
int main (){
int a,b,c;
printf("Enter three integer: ");
scanf("%d %d %d",&a,&b,&c);
int y=cal_sum(a,b,c);
printf("%d",y);


}

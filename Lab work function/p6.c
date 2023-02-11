#include <stdio.h>
int cal_power(int base,int exponent){
int m=1;
while(exponent--){
    m*=base;
}
return m;


}
int main (){
int a,b;
printf("Enter the base and exponent: ");
scanf("%d %d",&a,&b);
printf("%d ",cal_power( a,b));


}

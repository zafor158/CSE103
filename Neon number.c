#include <stdio.h>
#include <Math.h>


int main (){
int n;
printf("Enter the number: ");
scanf("%d",&n);
int square,r,sum=0,temp;
square=pow (n,2);
temp=square;
while(square!=0){
    r=square%10;
    sum+=r;
    square=square/10;
}
//printf("%d %d",temp,sum);
if(n==sum)printf("True");
else printf("False");
return 0;


}

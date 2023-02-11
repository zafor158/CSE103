#include <stdio.h>
int main (){
int add=1,minus=2,multiply=3,division=4,op,a,b,sum,mul,sub;
float div;
printf("What option you want to select: ");
scanf("%d",&op);
printf("Enter two numbers for the arithmetic operation: ");
scanf("%d %d",&a,&b);
if(op==add){
printf("You entered addition option\n");
    sum=a+b;
    printf("%d ",sum);
}
else if(op==minus){
        printf("You entered subtraction option\n");
    if(a>b)
    sub=a-b;
else sub=b-a;
printf("%d ",sub);
}
else if(op==multiply){
    printf("You entered multiplication option\n");
   mul=a*b;
printf("%d ",mul);
}
else if(op==division){
    printf("You entered division option\n");
  if(a>b)div=a/b;
  else div=b/a;
printf("%f ",div);
}


return 0;


}

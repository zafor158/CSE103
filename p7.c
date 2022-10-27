#include <stdio.h>
#include <math.h>
int main (){
int a,b,c;
float r1,r2,r3=0,r4=0;
printf("Enter the value of a,b,c: ");
scanf("%d %d %d",&a,&b,&c);
if(a==0){
    printf("Error : a is 0 right now.");
}else{
 r1=((b*b)-4*a*c);
 if(r1<0){
    printf("Syntax Error!!!");
}
else{
    r2=pow(r1,0.5);
    r3=(-b+r2)/2*a;
    r4=(-b-r2)/2*a;
}

}
printf("%f %f",r3,r4);
return 0;
}

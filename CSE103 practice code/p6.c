//problem 6
#include <stdio.h>
#include <math.h>
int main (){
float radius,length,volume_s,volume_c;
printf("Enter the radius and length: ");
scanf("%f %f",&radius,&length);
float v=4,e=3;math header
volume_c = pow(length,3);// library function ---  math header file
volume_s = (v/e)*3.1416*pow(radius,3);
if(volume_s>volume_c)printf("In Sphere shaped,you can store more water");
else if (volume_s<volume_c)printf("In Cubic shaped,you can store more water");
return 0;
}

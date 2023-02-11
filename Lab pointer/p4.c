#include <stdio.h>
#include <Math.h>
void cal_area_perimeter(int radius,float *area,float *perimeter){

*area=3.1416*pow(radius,2);
*perimeter=2*3.1416*radius;

}

int main (){
int radius;
float area=1,perimeter=1;
printf("Enter the radius: ");
scanf("%d",&radius);
//area=3.1416*pow(radius,2);
//perimeter=2*3.1416*radius;
cal_area_perimeter(radius,&area,&perimeter);
printf("Area of the circle: %f\n",area);
printf("Perimeter of the circle: %f\n",perimeter);

}

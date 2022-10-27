//problem 8
#include <stdio.h>
int main (){
    float usage,total_bill,unit=0;
    printf("Enter the electricity usage of your house: ");
    scanf("%f",&usage);
    if(usage<250){
        unit = 4;
    }
    else if(usage<500){
        unit=6;
    }
    else if(usage>=500){
        unit=9;
    }
    total_bill=usage*unit;
    printf("Total bill amount: %.2f",total_bill);
    return 0;
}

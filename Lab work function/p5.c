#include <stdio.h>
char calculate_grade(float r){
if(r==4.00)return 'A';
else if(r==3.75)return 'B';
else if(r==3.50)return 'C';
else if(r==3.25)return 'D';
else if(r==3.00)return 'F';
else return 'I';



}
int main (){

 float ch;
    printf("Enter grade point : ");
    scanf("%f",&ch);
    char y=calculate_grade(ch);
    printf("%c ",y);


}

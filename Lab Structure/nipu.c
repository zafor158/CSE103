#include <stdio.h>
struct Student{

float total_credit;
float total_grade_point;
float result;
};
int main (){

struct Student s1,s2;
 s1.total_credit=10.5;

 s1.total_grade_point=32.75;
 s1.result=s1.total_grade_point/s1.total_credit;
 printf("%f", s1.result);
}

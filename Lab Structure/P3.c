#include <stdio.h>
struct Emp_Info{
char name[20];
char address[20];
int salary;
};
int main (){
   struct Emp_Info Employeelist[4];
   int total_salary=0;
   float average_salary;
   for(int i=1;i<=4;i++){
    printf("Employee %d Info: ",i);
    scanf("%s %s %d",&Employeelist[i].name,&Employeelist[i].address,&Employeelist[i].salary);
   }
   for(int i=1;i<=4;i++){
    total_salary+=Employeelist[i].salary;
   }
   average_salary=total_salary/4;
   printf("Average salary: %.2f",average_salary);

}

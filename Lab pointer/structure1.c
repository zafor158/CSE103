#include<stdio.h>
struct Employee{
     char name[20];
     char id [20];
     int salary;
};
int main (){
   struct Employee employee1,employee2;
   printf("Enter Employee 1 Name: ");
   scanf("%s",&employee1.name);
   printf("Enter Employee 1 Id: ");
   scanf("%s",&employee1.id);
   printf("Enter Employee 1 salary: ");
   scanf("%d",&employee1.salary);

   printf("Enter Employee 2 Name: ");
   scanf("%s",&employee2.name);
   printf("Enter Employee 1 Id: ");
   scanf("%s",&employee2.id);
   printf("Enter Employee 1 salary: ");
   scanf("%d",&employee2.salary);

   printf("\n");
   printf("Employee 1 Informations\n");
   printf("Employee 1 Name: %s",employee1.name);
   printf("\nEmployee 1 Id: %s",employee1.id);
   printf("\nEmployee 1 salary: %d",employee1.salary);

    printf("\n");
   printf("Employee 2 Informations\n");
   printf("Employee 2 Name: %s",employee2.name);
   printf("\nEmployee 2 Id: %s",employee2.id);
   printf("\nEmployee 2 salary: %d",employee2.salary);



}

#include <stdio.h>
struct Std_info
{
    char name[20];
    int roll;
    float total_marks;
};
int main ()
{
    struct Std_info s[3];
    int k=0;

    for(int i=0; i<3; i++)
    {
        printf("Student %d Info : ",i+1);
        scanf("%s %d %f",&s[i].name,&s[i].roll,&s[i].total_marks);
    }
    int max=s[0].total_marks;

    for(int i=0; i<3; i++)
    {
        if(max<s[i].total_marks)
        {
            max=s[i].total_marks;
            k=i;
        }
    }
    printf("\n Highest marks: %s %d %.2f",s[k].name,s[k].roll,s[k].total_marks);
    for(int i=0; i<3; i++)
    {
        if(s[i].total_marks<50)
        {
            printf("\n Failed: %s",s[i].name);
        }
    }

}

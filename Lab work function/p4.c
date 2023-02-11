#include <stdio.h>
char case_change(char a)
{
    int c = a;//ascii value
    char d;
    if(c>64 && c<97)
    {
        d=a+32;
        return d;
    }
    else if(c>96 && c<124)
    {
        d=a-32;
        return d;
    }
}

int main ()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    char y=case_change(ch);
    printf("%c ",y);


}


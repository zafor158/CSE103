#include <stdio.h>
int my_strlen(char *p)
{
    int c=0;
   for(int i=0;p[i]!='\0';i++){
    if(p[i]!='\0'){
        c++;
    }
   }
    return c;

}
int main ()
{
    char ch[25];
    printf("Enter the string: ");
    scanf("%s",&ch);
    int len = my_strlen(&ch);///abns
    printf("Size of the string: %d",len);



}

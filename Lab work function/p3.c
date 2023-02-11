#include <stdio.h>
int is_uppercase(char a){
 int c = a;//ascii value
 //printf("%d ",c);
if(c>64 && c<97){
    return 1;
}
else {
    return 0;
}





}

int main (){
char ch;
printf("Enter a character : ");
scanf("%c",&ch);
int y=is_uppercase(ch);
printf("%d ",y);


}

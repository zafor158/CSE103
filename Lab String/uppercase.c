#include <stdio.h>
char uppercase(char c){
    if(c>96 && c<124){
        c=c-32;///
    }
return c;
}
int main (){
char c='a';
char n=uppercase(c);
printf("%c",n);

}
//uppercase-65 to 96 --A....Z
//lowercase-97 to 123---a....z

#include <stdio.h>
int main (){
int i=10, *p, **p1;

p = &i;// i address

p1 = &p;// p address

printf("Value of i = %d\n", i);//10

printf("Value of i = %d\n", *p);//10

printf("Value of i = %d\n", **p1);//10




}

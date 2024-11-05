#include<stdio.h>
#define CUBO(i) (i)*(i)*(i)
int main(void){
int a = 3
int b = CUBO(a);
printf("%d * %d * %d = %d", a, a, a, b);
return 0;
}
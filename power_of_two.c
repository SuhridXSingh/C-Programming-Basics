#include <stdio.h>
int main(){
int a;
printf("Enter a value:\n");
scanf("%d",&a);
(a>0)&&(a&(a-1))==0 ? printf("Is a power of 2\n") : printf("Is not a power of 2\n");
return 0;
}

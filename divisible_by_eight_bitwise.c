#include<stdio.h>
int main(){
int a;
  printf("Enter a number:\n");
  scanf("%d",&a);
  ((a&1)==0)&&((a&(1<<1))==0)&&((a&(1<<2))==0) ? printf("The number is divisible by 8\n") : printf("The number is not divisible by 8\n");
return 0;
}

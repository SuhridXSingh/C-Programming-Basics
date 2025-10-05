#include<stdio.h>
int main(){
int a;
  printf("Enter a number:\n");
  scanf("%d",&a);
int x;
  x=a>>4;
  x&1 ? printf("The 4th bit is ON\n") : printf("The 4th bit is OFF\n");
return 0;
}

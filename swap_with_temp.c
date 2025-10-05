#include<stdio.h>
int main(){
int a,b,c;
  printf("Enter two values: \n");
  scanf("%d%d",&a,&b);
  printf("Before swap a=%d and b=%d \n",a,b);
  c=a+b;
  a=c-a;
  b=c-b;
  printf("After swap a=%d and b=%d \n",a,b);
return 0;
}

#include <stdio.h>
int main(){
int a,b;
  printf("Enter two values:\n");
  scanf("%d%d",&a,&b);
  printf("Values before swap are a=%d and b=%d \n",a,b);
  a=a^b;
  b=a^b;
  a=a^b;
  printf("Values after swap are a=%d and b=%d",a,b);
return 0 ;
}

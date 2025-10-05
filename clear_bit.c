#include<stdio.h>
int main(){
int a,x,y ;
  printf("Enter a number:\n");
  scanf("%d",&a);
  x = a>>5;
  if ((x&1) ==0){printf("The 5th bit is 0 so the number remains unchanged ie %d\n",a);
}
  else{
    y = a^(1<<5);
    printf("The 5th bit is 1 so the number after clearing the 5th bit is %d\n",y);
}
return 0;
}

#include<stdio.h>
int main(){
  int a,sum=0;
  
while (1){
  printf("Enter a number:");
  scanf("%d",&a);
  if (a <0){
    break;
  }
  if (a>0){
    sum = sum + a;
  }
}
  
printf("The sum is %d\n",sum);
return 0;
}

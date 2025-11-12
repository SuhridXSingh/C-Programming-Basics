#include<stdio.h>
int main(){
int n,i=0,sum=0;
  printf("Enter the value of N:");
  scanf("%d",&n);

  while (i<=n){
    sum = sum + i;
    i++;
  }
printf("The sum of first %d natural numbers is: %d",n,sum);
return 0;
}

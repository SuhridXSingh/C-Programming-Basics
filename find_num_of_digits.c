# include <stdio.h>
int main(){
int n,i=0;
  printf("Enter a number:");
  scanf("%d",&n);
  
  do{
    n = n/10;
    i++;
  }while(n!=0);
  
  printf("Number of digits is: %d\n",i);
return 0;
}

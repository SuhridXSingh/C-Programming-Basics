#include<stdio.h>
int main(){
int low, high;
  printf("Enter the range of numbers:\n");
  scanf("%d%d",&low,&high);

  for( int i=low; i<high ; i++){
    if (i%2 == 0){
      printf("%d\n",i);
    }
  }
  
return 0;
}

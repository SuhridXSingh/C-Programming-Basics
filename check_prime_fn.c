#include<stdio.h>
int is_prime(int n){
  if (n<=1){
    return 0;
  }
  for (int i=2; i<n/2; i++){
    if (n%i == 0){
      return 0;
    }
  }
  return 1;
}
int main(){
int x;
  printf("Prime Numbers between 1 and 100 are:\n");
  for (x=1; x<=100; x++){
    if (is_prime(x)==1){
      printf("%d\n",x);
    }
  }
return 0;
}

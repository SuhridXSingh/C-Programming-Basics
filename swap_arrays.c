#include <stdio.h>
void swap_arrays(int *a, int *b, int size){
  int c;
    for (int i=0; i<size; i++){
        c = *a;
        *a = *b;
        *b = c;

       a++;
       b++;
    }
}
int main(){
  int a[5]={1,2,3,4,5};
  int b[5]={6,7,8,9,10};
  
  swap_arrays(a,b,5);

  for (int i=0; i<5; i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  for (int i=0; i<5; i++){
    printf("%d ",b[i]);
  }
  
  return 0;
}

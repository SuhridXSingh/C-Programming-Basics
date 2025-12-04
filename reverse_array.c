#include <stdio.h>

void reverse_array(int *arr, int size){
 int *start;
  start = arr;
 int *end;
  end = &arr[size-1];

  while (start<end){
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }

}

int main(){
  int size;
  printf("Enter the size of the array:\n");
  scanf("%d",&size);

  int arr[size];
  printf("Enter the elements of the array:\n");
  for (int i=0; i<size; i++){
    scanf("%d",&arr[i]);
  }
  
  printf("The array is:\n");
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  
  reverse_array(arr,size);
  
  printf("\nThe reversed array is:\n");
  for (int i=0; i<size; i++){
    printf("%d ",arr[i]);
  }
  return 0;
}

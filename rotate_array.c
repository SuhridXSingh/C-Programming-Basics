#include  <stdio.h>
int main(){
int arr[5],k,a[5];
  printf("Enter the elements of the array:\n");
  for (int i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the value of k(No. of times the array is to be rotated):");
  scanf("%d",&k);
  for (int i=0;i<5;i++){
    if (k<5){
      a[k]=arr[i];
      k++;
    }
    else{
      a[k-5]=arr[i];
      k++;
    }
  }
printf("The rotated array is:\n");
  for (int i=0;i<5;i++){
      printf("%d\n",a[i]);
  }
return 0;
}

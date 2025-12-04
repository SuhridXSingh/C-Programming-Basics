#include <stdio.h>
int main(){

int A[3][3];
int B[3][3];
int C[3][3];
  
  printf("Enter the elements of the first matrix:\n");
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      scanf("%d",&A[i][j]);
    }
  }
  
  printf("The first matrix is:\n");
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  
  printf("Enter the elements of the second matrix:\n");
  for (int i=0; i<3; i++){
     for (int j=0; j<3; j++){
       scanf("%d",&B[i][j]);
     }
  }

  printf("The second matrix is:\n");
  for (int i=0; i<3; i++){
     for (int j=0; j<3; j++){
       printf("%d ",B[i][j]);
     }
     printf("\n");
  }

  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      C[i][j] = 0;
      for (int k=0; k<3; k++){
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  printf("The product of the two matrices is:\n");
  for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }
  
return 0;
}

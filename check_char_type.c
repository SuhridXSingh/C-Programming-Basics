#include <stdio.h>
int main(){
  char b;
  char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char c[] = "abcdefghijklmnopqrstuvwxyz";
  char d[] = "0123456789";
  char e[] = "!@#$%^&*()_+-=[]{}|;:,.<>?/";
  
  printf("Enter a character:\n");
  scanf("%c",&b);

  for (int i=0; i<26; i++){
    if (b == a[i]){
      printf("The character is an uppercase letter\n");
    }
    else if (b == c[i]){
      printf("The character is a lowercase letter\n");
    }
    else if (b == d[i]){
      printf("The character is a digit\n");
    }
    else if (b == e[i]){
      printf("The character is a special character\n");
    }
  }
  return 0;
}

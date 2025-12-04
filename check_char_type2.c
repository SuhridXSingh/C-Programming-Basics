#include <stdio.h>
int main(){
  char b; 
  printf("Enter a character:\n");
  scanf("%c",&b);

  if (b>='A' && b<='Z'){
    printf("The character is an uppercase letter\n");
  }
  else if (b>='a' && b<='z'){
    printf("The character is a lowercase letter\n");
  }
  else if (b>='0' && b<='9'){
    printf("The character is a digit\n");
  }
  else{
    printf("The character is a special character\n");
  }
  
  return 0;
}

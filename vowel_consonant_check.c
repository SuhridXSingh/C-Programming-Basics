#include<stdio.h>
#include<string.h>

int count_vowels(char *str,int size){
  int count = 0;
  for(int i=0; i<size; i++){
      if (*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u'){
          count++;
      }
     str++;
  }
return count;
}

int count_consonants(char *str,int size){
  int count = 0;
  for(int i=0; i<size; i++){
      if (*str!='a' && *str!='e' && *str!='i' && *str!='o' && *str!='u'){
          count++;
      }
     str++;
  }
return count;
}

int main(){
char str[100];
    printf("Enter a string:\n");
    scanf("%s",str);
    int size = strlen(str);
    printf("The number of vowels in the string is %d\n",count_vowels(str,size));
    printf("The number of consonants in the string is %d\n",count_consonants(str,size));

return 0;
}

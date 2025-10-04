#include<stdio.h>
int main(){
int a,new_num;
printf("Enter a value:");
scanf("%d",&a);
int mask = (1<<4) | (1<<2);
new_num = a ^ mask;
printf("The new number after toggling the second and the fourth index bits is %d",new_num);
return 0;
}

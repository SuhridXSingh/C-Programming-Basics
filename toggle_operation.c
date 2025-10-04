#include <stdio.h>
int main(){
int a,b,new_num;
printf("Enter a number and the posistion of the bit you want to toggle:\n");
scanf("%d%d",&a,&b);
int mask = 1<<b;
new_num = a ^ mask;
printf("The number after toggling the %dth bit of %d is %d\n",b,a,new_num);
return 0;
}

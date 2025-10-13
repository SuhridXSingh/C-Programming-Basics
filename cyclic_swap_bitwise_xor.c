#include<stdio.h>
int main(){
int a=1,b=2,c=3,d=4;
  a=a^b;
  b=a^b;
  a=a^b; //a=2,b=1
  c=c^d;
  d=c^d;
  c=c^d; //c=4,d=3
  a=a^c;
  c=a^c;
  a=a^c; //a=4,c=2
  printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);
return 0;
}

#include<stdio.h>
void num (int a ,int b)
{
int c = a+b;
int d = a*b;
int e = a-b;
int f = a/b;
  printf("add = %d",c);
  printf("\nmulti = %d",d);
  printf("\nsub = %d",e);
  printf("\ndiv = %d",f);
}
 int main (void)
 {
  int x,y;
  printf("Enter two number: ");
  scanf("%d %d",&x,&y);
  num(x,y);
   return 0;
   }

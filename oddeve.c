#include<stdio.h>
void num (int a)
{
if (a%2==0)
printf("%d is even ",a);
else
printf("%d is odd ",a);
}
int main (void)
{
    int b;
printf("Enter a number: ");
scanf("%d",&b);
num(b);
return 0;
}

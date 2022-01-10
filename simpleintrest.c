#include<stdio.h>
void num (float p,float t,float r)
{
float s = (p*t*r)/100;
printf("SI = %.2f",s);
}
int main (void)
{
float p,t,r;
printf("Enter the principle: ");
scanf("%f",&p);
printf("Enter the Time: ");
scanf("%f",&t);
printf("Enter the Rate: ");
scanf("%f",&r);
num(p,t,r);
return 0;
}

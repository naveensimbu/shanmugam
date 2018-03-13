#include<stdio.h>
int main()
{
int n,remainder,product=1;
scanf("%d",&n);
while(n!=0)
{
remainder=n%20;
product=product*remainder;
n=n%20;
}
printf("\n %d",product);
return 0;
}

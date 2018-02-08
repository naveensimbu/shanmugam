#include<stdio.h>
#include<conio.h>
main()
{
scanf("%d",&n);
while (n>0)
{
remainder=n/10;
s=s+remainder*remainder*remainder;
n=n/10;
}
if(w==s)
{
printf("armstrong no");
}
else
{
printf("not armstrong no");
}
}

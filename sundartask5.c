#include<stdio.h>
void main()
{
int c[10];
 int i,j,a,d;
printf("Enter the array elememt");
for(i=0;i<5;i++)
{
scanf("\n%d",&c[i]);
}
printf("\nSorted array");
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(c[i]>c[j])
{
a=c[i];
c[i]=c[j];
c[j]=a;
}
}
}
for(i=0;i<5;i++)
{
printf("\n sorted array element is %d",c[j]);
}
for(i=0;i<5;i++)
{
d=c[i]/2;
{
printf("\n%d",d);
}
}

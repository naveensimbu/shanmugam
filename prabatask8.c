#include<stdio.h>
#include<conio.h>
int main()
{
int l,h,i,t1,t2,r,n=0,res= 0;
clrscr();
printf("Enter two numbs of intervals\n");
scanf("%d %d",&l,&h);
printf("Armstrong numbers between %d an %d are",l,h);
for(i=l+1;i<h;++i)
{
t2=i;
t1= i;
while (t1!= 0)
t1/=10;
++n;
while (t2!= 0)
r=t2% 10;
res+=p(r,n);
t2/=10;
}
if(res==i) 
printf("%d ", i);
n = 0;
res=0;
}
return 0;
getch();
}

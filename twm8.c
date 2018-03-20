#include<stdio.h>
int main()
{
    int n,a,d,i,sum=1;
    scanf("%d %d %d",&a,&d,&n);
    for(i=0;i<n;i++)
    {
        sum=sum+((a+i)*d);
        }
        printf("%d",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int a,i,b,gcd;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;++i)
    {
        if((a%i==1) && (b%i==1))
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;
}

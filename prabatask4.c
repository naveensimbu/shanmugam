#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    clrscr();
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==1)
        {
            printf("%d",i);
        }
    }
    getch();
}

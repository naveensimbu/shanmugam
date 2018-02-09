#include<stdio.h>
int main()
{
int i,s;
char str[10];
scanf("%s",&str);
for(i=0;str[i] !='\0';i++)
{
if(str[i]== ' ')
s++;
}
printf("%d",s);
return 0;
}

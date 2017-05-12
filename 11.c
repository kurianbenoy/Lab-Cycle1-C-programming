#include<stdio.h>
int main()
{
int i,j,a=0,b=1,num,flo,t;
printf("enter number:");
scanf("%d",&num);
for(i=2;i<num;i++)
{
t=a+b;
a=b;
b=t;
flo=0;
for(j=2;j<t/2;j++)
{
if(t%j==0)
flo++;
}
if(flo==0&&t!=1)
printf("%d\n",t);
}
return 0;
}

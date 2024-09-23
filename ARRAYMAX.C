#include<stdio.h>
#include<conio.h>
void main()
{
int max=0,min=99,num[10],i,n;
clrscr();
printf("no of number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&num[i]);
if(max<num[i])
max=num[i];
if(min>num[i])
min=num[i];
}
printf("maximum:%d\n minimum:%d",max,min);
getch();
}
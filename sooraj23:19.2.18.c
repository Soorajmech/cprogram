#include<stdio.h>
#include<conio.h>
int main()
{
int array[20],i,min,s;
clrscr();
printf("enter the number of elements");
scanf("%d",&s);
printf("enter %d integers",&s);
for(i=0;i<s;i++)
{
scanf("%d",&array[i]);
}
min=array[0];
for(i<1;i<size;i++)
{
if(a[i]<min)
{
min=array[i];
}
}
printf("minimum element is%d",&i);
return 0;
}

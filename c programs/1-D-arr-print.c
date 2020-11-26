#include<stdio.h>
int main()
{
int a[10],i;
for(i=0;i<10;i++)
{
printf("enter elements:/n");
scanf("%d",a[i]);
}
printf("The elements are .../n");
for(i=0;i<10;i++)
{ 
printf("%d",a[i]);
}
return 0;
}
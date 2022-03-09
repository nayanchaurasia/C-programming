#include<stdio.h>
int main()
{
int arr[5],i,t,b[5];
for ( i = 0; i <5; i++)
{
    printf("enter the number  ");
    scanf("%d",&arr[i]);
}

for ( i = 0; i<5 ; i++)
{
   t=arr[i];
   b[4-i]=t;
   }
   printf("the reverse order is :  ");
for ( i = 0; i < 5; i++)
{
    printf("  %d", b[i]);
}

 return 0;
}
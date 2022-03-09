#include<stdio.h>
int main()
{
int arr[5],i;
for ( i = 0; i <5; i++)
{
    printf("enter the number  ");
    scanf("%d",&arr[i]);
}

for ( i = 0; i < 5; i++)
{
    printf("%d input of the array is %d \n",i+1,arr[i]);
}
 return 0;
}
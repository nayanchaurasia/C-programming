#include<stdio.h>
int main(){
int a[100];
int i,j,n,element;
printf("enter the number of elements is the array\n");
scanf("%d",&n);
printf("enter different numbers(NOT VALID FOR REPEATED NUMBERS)\n");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
printf("enter the number which to be deleted from the array of numbers\n");
scanf("%d",&element);
n--;
for ( i = 0; i < n; i++)
{
    if (a[i]==element)
    {
      for ( j=i; j <n; j++)
      {
          a[j]=a[j+1];
      }
      
    }
    
}
printf("fter delection of that number the array is\n");
for ( i = 0; i < n; i++)
{
    printf("%d ",a[i]);
}

return 0;
}
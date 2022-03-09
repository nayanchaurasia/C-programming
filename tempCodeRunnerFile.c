#include <stdio.h>
int main()
{
int i,j,c,n,value;
int a[50];
printf("enter the number of elements in the array\n");
scanf("%d",&n);
printf("enter the array\n");
for ( i = 0; i < n; i++)
scanf("%d",&a[i]);
printf("enter the position at which u want to add the element\n");
scanf("%d",&c);
printf("enter the value to be added in the array\n");
scanf("%d",&value) ;
    c--;
  n++;

for ( i =n-1; i>c; i++)
  {  a[i]=a[i-1];
  }
     a[c]=value;

printf("the new array is \n");
for ( i = 0; i < n; i++)
{
    printf("%d ",a[i]);
}





}
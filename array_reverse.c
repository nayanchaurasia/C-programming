#include<stdio.h>
int main(){
int i,j,n,t;
int a[100];
printf("enter the number of elements in the array: \n ");
scanf("%d",&n);

for ( i = 0; i<n; i++)
{
    printf("enter the %d number \n",i+1);
    scanf("%d",&a[i]);
}

for ( i=0,j=n-1; i<j;  i++,j--)
{
     t=a[i];
     a[i]=a[j];
     a[j]=t;
  
}
for ( i = 0; i <n; i++)
{
    printf("%d  ",a[i]);
}



}
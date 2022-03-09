#include<stdio.h>
int main(){
int i,n,t,c=0,d=0;
//t is a variable for frequency
int a[100];
printf("enter the number of elements in the array: \n ");
scanf("%d",&n);

for ( i = 0; i<n; i++)
{
    printf("enter the %d number \n",i+1);
    scanf("%d",&a[i]);
}

printf("enter the number of elements whose frequency is to be checked: \n ");
scanf("%d",&t);
for ( i=0; i<n;i++)
{
    if (t==a[i])
    c++;
    else
     d=1;
}
  if (c>0)
  printf("the no. %d is found %d times \n",t,c);
  
  if (d=1)
  printf("the no. %d is not found in the array \n ",t);
return 0;
}
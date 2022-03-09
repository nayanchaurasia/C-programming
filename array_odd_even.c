#include <stdio.h>
int main(){
int a[100],even[100],odd[100],d=0,c=0,i,n,t,j,k;
printf("enter the number of elements in the array <100\n");
scanf("%d",&n);
printf("enter the numbers in the array:  \n");
for ( i=0; i<=n-1; i++)
{
    scanf("%d",&a[i]);
        if (a[i]%2==0)
         {
          even[c]=a[i];
         c++;
         }                                                                   
        else 
        {
         odd[d]=a[i];
         d++;        
         }
}
printf("even numbers are : \n");
for ( j=0; j<=c-1 ; j++)
{
  printf("%d  ", even[j]);
}
 
 printf("\n");
 printf("odd numbers are : \n");
  for ( k= 0; k<=d-1; k++)
  {
      printf("%d  ",odd[k]);
  }
  

  return 0;
}
#include<stdio.h>
int main(){
int i,n,j,c,element;
//t is a variable for frequency
int a[100];
int freq[100];
printf("enter the number of elements in the array: \n ");
scanf("%d",&n);

for ( i = 0; i<n; i++)
{
    printf("enter the %d number \n",i+1);
    scanf("%d",&a[i]);
}

  for ( i = 0; i < n; i++)
  {
      c=1;
      if (a[i]!=-1)
      {
        for ( j=i+1; j<n; j++)
        {
          if (a[j]==a[i])
          {
            c++;
            a[j]=-1;
          }
          
        }
        freq[i]=c;
      }
      
   
  }

  for ( i = 0; i < n; i++)
  {
    if (a[i]!=-1)
    {
      printf("%d number is occured %d times \n",a[i],freq[i]);
    }
    
  }
  
  
return 0;
}
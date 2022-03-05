// BUBBLE SHOT FOR ARRAY TO ARRANGE IN DECENDING ORDER
#include<stdio.h>
int main ()
{
int i,j,n,t,a[50];
printf("enter the number of elemnts in te array : \n");
scanf("%d",&n);
printf("enter the array \n");
for ( i = 0; i < n; i++)
    scanf("%d",&a[i]);

for ( i = 0; i < n-1; i++)
{
    for ( j = 0; j < n-i-1; j++)
    {
        if (a[j]<a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
        
    }
 
}

for ( i = 0; i < n; i++)
{
    printf("%d ",a[i]);
}


return 0;
}
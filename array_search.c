#include<stdio.h>
int main()
{
int i,a[100],n,search,c=0;
printf("enter the number of an array :");
scanf("%d",&n);
 
for ( i = 0; i <5; i++)
{
   printf("enter the number  ");
    scanf("%d",&a[i]);
}
printf("enter the number to  be searched \n");
scanf("%d",&search);
for ( i = 0; i <=n-1; i++)
{
    if (a[i]==search)
    {
        printf("the number is found in the position %d", i+1);
        c=1;
    }
    
}

if (c==0)
{
    printf("the number is not found \n \a");
}


return 0;

}
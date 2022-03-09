#include<stdio.h>
int main(){
int a[100],even[100],odd[100];
int k,n,j,i;
i=0;
j=0;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements in the array:\n");
for ( i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}

for ( i = 0; i < n; i++)                                                          
{
    if (a[i]%2==0)
    {
        even[j]=a[i];
        j++;
    }
   else
    {
            odd[k]=a[i];
           k++;
    }
    


}
printf("the even numbers are \n");
for ( i= 0; i<j; i++)
printf("%d ",even[i]);
printf("\n");
printf("the odd numbers are \n");
for ( i = 0; i <k; i++)
printf("%d ",odd[i]);
return 0;

}
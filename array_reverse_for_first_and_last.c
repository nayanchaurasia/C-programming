//making the last value of an array the first value
//u can say that a revrse a array for 1 time

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
    //to reverse the first and last elment of the array 
    //for last 2 element to do the same we have to use and for or while with the condition 
    //such that it just run for 2 times 
    t=a[0];
    a[0]=a[n-1];
    a[n-1]=t;


for ( i = 0; i <n; i++)
{
    printf("%d  ",a[i]);
}

return 0;

}
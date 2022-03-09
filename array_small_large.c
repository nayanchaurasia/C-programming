#include<stdio.h>
int main()
{
int i,a[5],small,large;
for ( i = 0; i <5; i++)
{
    printf("enter the number  ");
    scanf("%d",&a[i]);
}
small=large =a[0];
for ( i = 0; i<5 ; i++)
{
 if (a[i]<small)
    small=a[i];

 if (a[i]>large)
 {
     large=a[i];
 }
}
printf ("the largest=%d  and the smallest=%d",large ,small);
 return 0;
}
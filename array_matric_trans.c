#include<stdio.h>
int main()
{
int a[50][50],b[50][50];
int i,j,r1,c1;
printf("enter the number of rows and column in the matrix : \n");
scanf("%d  %d",&r1,&c1);
printf("enter the array \n");
for ( i = 0; i < r1; i++)
    for ( j = 0; j < c1; j++)
    {  
        scanf("%d ",&a[i][j]);
    }

    for ( i = 0; i < r1; i++)
     for ( j = 0; j < c1; j++)
    {
        b[j][i]=a[i][j];
    }

    for ( i = 0; i < c1; i++)
    {
        for ( j = 0; j < r1; j++)
        {
                 printf("%d\t",b[i][j]);

        }
      printf("\n");
    }  
    return 0;
}
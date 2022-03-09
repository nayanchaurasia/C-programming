
#include<stdio.h>
int main()
{
int a,b,c;
//print in outside use down one , dont use printf with the format specifiers and variables

printf("enter the number let it be a\n");
scanf("%d" ,&a );

printf("enter the number let it be b\n");
scanf( "%d",&b);

c=a/b;
printf("division  of a and b = %d\n", c);

return 0;
}
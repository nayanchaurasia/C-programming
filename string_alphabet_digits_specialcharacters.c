#include<stdio.h>
#include<string.h>
int main()
{
int c,b,d;
char a[50];
c=0;
b=0;
d=0;
printf("programe to count the alphabets,digits and special characters \n");
printf("enter the word which consits of alphabet special characters and digits\n "); 
gets(a);
for (int i = 0; a[i] !='\0'; i++)
{
    if (a[i]>='A'&& a[i]<='Z'|| a[i]>='a'&& a[i]<='z')
        c++;
    else if (a[i]>='0'&&a[i]<='9')
    {
        b++;
    }
    else if (a[i]==' ')
    {

    }
    else 
    {
        d++;
    }
    
}
printf("the number of alphabets ,digits and special character in the given word is %d    %d  %d",c,b,d);
return 0;
}
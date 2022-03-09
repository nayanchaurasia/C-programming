#include<stdio.h>
#include<string.h>

//
int main()
{
char str[50],ch,*p;

char i ;
printf("enter the string\n");
gets(str);
printf("enter the character whose u have to find the first occurence\n");
scanf("%c",&ch);

p= strchr(str,ch);

printf("the %c chracter is occured %d place\n",ch,p-str+1);
return 0;

}
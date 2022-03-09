#include<stdio.h>
#include<string.h>
int indexof(char s[50], char occ)
{
   printf("enter the string: \n");
   gets(s);
   printf("enter the character :\n");
  scanf("%c",&occ);
    fflush;
   for (int i = 0;s[i]!='\0'; i++)
   {
       if (occ==s[i])
       {
           return i;
       }
       
   }
   return 0;
}

int main()
{   char b;
    int c;
    char str[50];
    c=indexof(str,b);
    if (c==0)
    {
        printf("no occurence of the %c character in the given string",b);
    }
    else
    {
        printf("the first occurence of the character %c is %d",b,c+1);
    }
    return 0;
}
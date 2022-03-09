#include<stdio.h>
#include<string.h>
int indexof(char s[50], char occ)
{    int t=0;
   printf("enter the string: \n");
   gets(s);
   printf("enter the character :\n");
  scanf("%c",&occ);
   for (int i=strlen(s)-1; i>=0; i--)
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
        printf("the last occurrence of the character %c is %d",b,c+1);
    }
    return 0;
}
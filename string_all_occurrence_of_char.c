#include<stdio.h>
#include<string.h>
void occurrenceofall(char s[50])
{   int c;
   printf("enter the string: \n");
   gets(s);

   for (int i = 0;s[i]!='\0'; i++)
   {
       c=1;
       if (s[i]!='1')
       {
           for (int j =i+1; j<=strlen(s)-1; j++)
           {
               if (s[i]==s[j])
               {
                   c++;
                   s[j]='1';
               }
               
           }
           
       }
   if (s[i]!='1')
         printf("the %c character in string has occurred %d times \n",s[i],c);  
   }
   
}

int main()
{
    char str[50];
    occurrenceofall(str);
    return 0;
}
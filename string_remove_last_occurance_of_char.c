#include<stdio.h>
#include<string.h>
int main()
{
char ch,s[50];
int i ,j,c,count=0;
printf("enter the string \n");
gets(s);
printf("enter the character whose last occurance is to removed \n ");
scanf("%c",&ch);

for (size_t i = 0; s[i]!='\0'; i++)
{
    if (ch==s[i])
    {
        count=1;
    }
    
}

if (count==0)
{
    printf("the given character is not found in the string\n");
}
else
{
        strrev(s);
    for ( i = 0; s[i]!='\0'; i++)
    {
        if (s[i]==ch)
         {
                c=i;
                break;

         }
    }      

     for ( i = c; s[i]!='\0'; i++)
     {
         s[i]=s[i+1];
     }
            strrev(s);
     puts (s);
}





}
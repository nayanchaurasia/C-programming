#include<stdio.h>
#include<string.h>
int main()
{
int i ,j,c ;
char s[50];
printf("enter the string\n");
gets(s);
for ( i = 0; s[i]!='\0'; i++)
{
    for ( j = i+1; s[j]!='\0'; j++)
    {
       if (s[j]==s[i])
       {
           s[j]='*';
       }
       
    }
    puts(s);

    /////wrong  because u had not reduced the length size

    if (s[i]=='*')
    {                                                    ASK0009090
        for ( j = i; s[j]!='\0'; j++)
        {
            s[j]=s[j+1];
            if (s[j+1]=='*')
            {
                j--;
            }
            
        }
      
    }

}
puts (s);
return 0;
}
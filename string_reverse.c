#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
int i;
 printf("enter many words : \n");
 gets(s);
for ( i = strlen(s)-1; i >=0; i--)
{
    if (s[i]==' ')
    {       
     printf("%s",s[i]);
           s[i]='\0';  
    }   
}
//printing the last word
puts(s);

}

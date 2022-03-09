// write a c program to revere order of words in a string 
//for example  INPUT ==i am a good boy 
// output=== boy good a am i

#include<stdio.h>
#include<string.h>
void revword(char s[50])
{                                                          
 int i;
 printf("enter many words : \n");
 gets(s);
for ( i = strlen(s)-1; i >=0; i--)
{
    if (s[i]==' ')
    {       
        s[i]='\0';  
        printf("%s",s[i]+1);
       
    }   
}
//printing the last word
puts(s);
}

void main()
{
    char a[50];
    revword(a);
    
}
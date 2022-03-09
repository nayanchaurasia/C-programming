#include<stdio.h>
#include<string.h>
int main()
{
char s[50],s1[50];
int c,k[50],l,m;
printf("enter the string \n");
gets(s);
// FORMATION OF STRING OS UNIQUES CHARACTERS IN A PARYICULAR STRING
s1[0]=s[0];
m=1;
for (int i = 0; s[i]!='\0'; i++)
{   
    c=0;
    for (int  j = 0; j <m; j++)  // mtching with the string s1 which we are making 
    {
        if (s1[j]==s[i])           //if found equal then leave it otherwise putin the s1 string
        {
            c=1;
            break;
        }     
    }
     if (c==0)
     {
         s1[m]=s[i];
         m++;
     }
}
s1[m]='\0';

for (int i = 0;s1[i]!='\0'; i++)
{       c=0;
    for (int j = 0; s[j]!='\0'; j++)
    {
       if (s1[i]==s[j])
       {
           c++;
       }
       
    }
    k[i]=c;
}
   l=k[0];
for (int i = 0; i < strlen(s1); i++)
{
    if (l<=k[i])
        l=k[i];
}
for (int i = 0; i < strlen(s1); i++)
{
    if (l==s[i])
    {
        c=i;
        break;
    }
    
}

    printf("the highest frequecy character in the string is %c for %d times ", s1[c],l);
    return 0;
}
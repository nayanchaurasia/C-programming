#include<stdio.h>
//by making a string of unique character
//and then comparing it with the original string

int main()
{
    int k=1,c;
    char s[50],a[50];
    int i,l,j;
    printf("enter the string \n");
    gets(s);
    // FORMATION OF STRING WHICH CONTAINS UNIQUE CHARACTER
    a[0]=s[0];
    for ( i = 0; s[i]!='\0'; i++)
    {
        for ( j = 0; j<k; j++)
        {     c=0;
            if (a[j]==s[i])
            {  
              c=1;
             break;
            }
        } 
        if (c==0)
        {
         a[k]=s[i];
            k++;
        }

    }    
        a[k]='\0';

     //compariring string a with s...
    for ( i = 0; a[i]!='\0'; i++)
    {   
        c=0;
       for ( j = 0; s[j]!='\0'; j++)
        {
            if (a[i]==s[j])
            c++;
        }
     printf("the %c character is occurred %d times in the string \n",a[i],c);
     }
     return 0;
}



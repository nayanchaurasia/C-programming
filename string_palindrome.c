#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],a[50];
    int t;
    printf("enter the word\n");
    gets(s);
    strcpy(a,s);
    strrev(s);
    t=strcmp(a,s);
    if (t==0)
    {
        printf("the given word is PALINDROME!!!\n");
    }
    else
    {
        printf("the given word is not palindrome****");
    }
    
    return 0;
}
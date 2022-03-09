#include<stdio.h>
#include<string.h>
int main(){
    int b=0,c=0;
char a[50];
printf("enter the word \n"); 
gets(a);
for (int i = 0; a[i] !='\0'; i++)
{
    if (a[i]=='A' ||a[i]=='E'|| a[i]=='a'|| a[i]=='I'||a[i]=='O'|| a[i]=='U'|| a[i]=='e'|| a[i]=='i'||a[i]=='o'|| a[i]=='u' )
        b++;

    else if (a[i]>='A'&& a[i]<='Z'|| a[i]>='a'&& a[i]<='z')
        c++;
    
}
printf("the number of vowels and consonents  in the given word is %d     %d",b,c);
return 0;
}
//using switch statement write a progeam to find wether the
//alphabe tis vowel or consonent

#include<stdio.h>
int main(){
char ch;
printf("enter the alphabet\n");
scanf("%c",&ch);

switch (ch)
{
case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
     
     printf("the given alphabet is a vowel\a ");
    break;

default:
     printf("the given alphabet is consonent\a ");
    break;

}
    return 0;
}

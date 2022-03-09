#include<stdio.h>
#include<string.h>
int main(){
char arr []="NaYAN";
char abb[]="NZYAN";
int b;
b=strcmp(arr,abb);
printf("the length of the string  is %s\n %s\n %d", arr,abb,b);
//ans of b is -1 because the strcmp function also compare the lower and upper case of the 
//given both strings in the code 
return 0;
}
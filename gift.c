//if a student is pass in both maths and science then give him a gift of 45 rs
//and if its is pass in either one subject then give him a gift of 15 rs
#include <stdio.h>
int main(){

int maths,sci;

printf("enter your maths marks\n");
scanf("%d",&maths);
printf("your maths marks are %d\n ",maths);


printf("enter your science marks\n");
scanf("%d",&sci);
printf("your science marks are %d\n ",sci);

if (maths>=30 && sci>=30){

    printf("since you are pass in  maths and science u get gift of 45rs\n");

}
   
else if (maths>=30 && sci<30 ){
    printf("sine u are pass in maths u get a gift of 15rs\n");

}


else if (maths<30 && sci>=30 ){
    printf("you get a gift of 15rs\n");
}

else printf("sorry u are fail");

return 0;

}
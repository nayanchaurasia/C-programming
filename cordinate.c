#include <stdio.h>
int main (){
    int x,y;
    // x nd y are coordinate of circle
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf ("x=%d",x\n);
      
     printf("enter the value of y\n");
    scanf("%d",&y);
    printf ("y=%d",y\n);

     if(x=0 && y=0){
        printf ("this the point of origin");
    }
    else if  (x=0 && y!=0 ){
        printf ("this point is on x axis ");

    }
    else if (x!=0 && y=0 )
    {
        printf("this point is on y axis");
    }
    
}
#include <stdio.h>

main(){
    int num;
    scanf("%d",&num);
    printf("enter any value");

   if(num<0){
      printf("the number is native");
   }

   else if(num>0){
    printf("the number is positive");
   }
   
   else{
    printf("the number is nutrial");
   }
}
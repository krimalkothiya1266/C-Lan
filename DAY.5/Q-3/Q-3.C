#include <stdio.h>

main(){

    float angle1,angle2,angle3;
    
    angle1;
    printf("enter the 1st angle value");
   scanf("%f",&angle1);


   angle2;
    printf("enter the 2st angle value");
   scanf("%f",&angle2);


    angle3 = 180 - (angle1+angle2);

    printf("the third angle of triangle is:%f" ,angle3);


}
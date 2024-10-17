#include <stdio.h>
int main()
{
    float principal,rate,time,simpleintrest;
    printf ("enter the principal amount :");
    scanf ("%f",&principal);
    printf("enter the rate of intrest :");
    scanf ("%f",&rate);
    printf ("enter the time (in years) :");
    scanf ("%f",&time);
    simpleintrest=(principal*rate*time)/100;
    printf("the simpleintrest is %f",simpleintrest);
    
    return 0;
}    


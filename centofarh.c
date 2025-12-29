
#include<stdio.h>
float logic(float cent){
    float far;
    far=(32+(cent*9/5));
    return far;
}

float main()
{   
    float fahrenheit,cent;
    printf("temperature in celcius = ");
    scanf("%f",&cent);
    fahrenheit=logic(cent);
    printf("%f",fahrenheit);
    return 0;
}

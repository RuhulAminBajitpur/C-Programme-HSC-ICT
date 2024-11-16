#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in Celsius scale: ");
    scanf("%f",&c);
    f=((c*9)/5)+32;
    printf("Temperature in Fahrenheit scale= %f",f);
    return 0;
}

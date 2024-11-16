#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in Fahrenheit scale: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temperature in Celsius scale= %f",c);
    return 0;
}

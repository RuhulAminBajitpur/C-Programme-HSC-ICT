#include<stdio.h>
int main ()
{
    int y;
    printf("Enter a year: ");
    scanf("%d",&y);
    if(y%4==0 && y%100!=0 || y%400==0)
    printf("%d is leap year.",y);
    else
    printf("%d is not leap year.",y);
    return 0;
}

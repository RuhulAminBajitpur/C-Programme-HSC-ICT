#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=9;i<=90;i=i+3)
    {
        sum=sum+i;
    }
    printf("Summation=%d",sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int n,rem,sum=0; //rem= reminder=ভাগশেষ 
    printf("Enter any number:");
    scanf("%d",&n);
    
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    
    printf("Summation of digits = %d",sum);
    
    
    return 0;
}

#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("please enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("your number is a prime number");
    }
        else
    {
        printf("your number isn't a prime number");
    }
    return 0;
   
}

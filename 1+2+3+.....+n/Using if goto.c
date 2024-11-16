#include<stdio.h>
int main ()
{
    int i=1,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    level:
    
        sum=sum+i;
        i++;
    
    if(i<=n)
    goto level;
    printf("Summation=%d",sum);
    return 0;
}

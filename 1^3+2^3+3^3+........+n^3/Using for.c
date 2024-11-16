#include<stdio.h>
#include<math.h>
int main ()
{
    int i,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,3);
    }
    printf("Summation=%d",sum);
    return 0;
}

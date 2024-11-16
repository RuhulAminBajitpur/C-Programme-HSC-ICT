#include<stdio.h>
#include<math.h>
int main ()
{
    int i=1,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    do
    {
        sum=sum+pow(i,3);
        i++;
    }
    while(i<=n);
    printf("Summation=%d",sum);
    return 0;
}

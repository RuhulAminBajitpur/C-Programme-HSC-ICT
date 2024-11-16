#include<stdio.h>
#include<math.h>
int main ()
{
    int i=1,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    level:
    
        sum=sum+pow(i,3);
        i++;
    
    if(i<=n)
    goto level;
    printf("Summation=%d",sum);
    return 0;
}

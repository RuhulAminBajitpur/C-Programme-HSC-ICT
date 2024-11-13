#include<stdio.h>
int main()
{
int num[10],n,i,max;
printf("How many number?");
scanf("%d",&n);
printf("Enter %d number elements",n);
for(i=0;i<n;i++)
{
    scanf("%d",&num[i]);
    max=num[0];
}
for(i=1;i<n;i++)
{
    if(num[i]>max)
    {
        max=num[i];
    }
    else
           max= max;
        }
    printf("Maximum=%d",max);
}

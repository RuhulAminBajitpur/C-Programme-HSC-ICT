#include<stdio.h>
int main ()
{
    int i,n;
    i=1;
    printf("How many times you want to see the text?: ");
    scanf("%d",&n);
    do
    {
        printf("Ruhul Amin\n");
        i++;
    }
    while(i<=n);
    return 0;
}

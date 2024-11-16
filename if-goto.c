#include<stdio.h>
int main ()
{
    int i,n;
    i=1;
    printf("How many times you want to see the text?: ");
    scanf("%d",&n);
    level:
    
        printf("Ruhul Amin\n");
        i++;
    
    if(i<=n)
    goto level;
    return 0;
}

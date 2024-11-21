#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("Small Letter.");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Capital Letter.");
    }
    else
    {
        printf("Wrong input.");
    }
    return 0;
}

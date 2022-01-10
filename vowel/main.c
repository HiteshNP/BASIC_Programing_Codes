#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    c=tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        printf("Its is a vowel");
    else
        printf("It is not a vowel");
    return 0;
    }

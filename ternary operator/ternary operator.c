#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,big;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    big=(a>b&&a>c)?(a):((b>c)?(b):(c));
    printf("Biggest is%d\n",big);
    return 0;
}

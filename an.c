#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if( (c>='a' && c<='n') || (c>='A' && c<='N'))
        printf("%c is an alphabet.",c);
    else
        printf("%c is not an alphabet.",c);

    return 0;
}

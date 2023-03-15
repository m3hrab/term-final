#include <stdio.h>
int main()
{
    char str[100];
    char reverse_str[100];

    gets(str);

    int i,j;
    for(i=0, j=strlen(str)-1; str[i] != '\0'; i++, j--)
    {
        reverse_str[i] = str[j];
    }

    reverse_str[i] = "\0";
    
    printf("\nAfter Reverse: %s\n", reverse_str);
}
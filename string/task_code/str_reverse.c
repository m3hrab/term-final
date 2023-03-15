#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

    // find the string length manually 
    int length = 0;
    for(int i=0; str[i]!='\0'; i++)
    {
        length += 1;
    }

    printf("\nString '%s' Length: %d\n",str, length);

    // string reverse 
    char str2[100];
    int i, j;
    for(i=0, j = length-1; i<length; i++, j--){
        str2[i] = str[j];
    }
    str2[i] = '\0';
    printf("\nReverse String: %s\n", str2);
}
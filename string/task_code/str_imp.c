#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char str2[100];
    printf("Name: ");
    // scanf("%[^\n]", str); 
    gets(str);


    // using string buit-in functions 
    printf("\nLegth: %d\n", strlen(str));
    strcpy(str2, str);
    printf("String Copy: %s\n", str2);

    strcat(str, " , meow :p");
    printf("%s\n", str);
    
    char strX[] = "cbcd";
    char strY[] = "abcd";
    char strZ[] = "cbcd";

    int result;

    // // comparing strings 
    result = strcmp(strX, strZ);
    printf("\nstrcmp(strX, strY) = %d\n\n", result);

    // result = strcmp(str1, str3);
    // printf("strcmp(str1, str2) = %d\n", result);



    return 0;
}
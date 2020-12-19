#include <stdio.h>
#include <string.h>

int main ()
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message: %s\n", greeting);

    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int  len ;
    // strcpy: string copy
    strcpy(str3, str1);
    printf("strcpy(str3, str1):  %s\n", str3);

    // strcat: string concat
    strcat(str1, str2);
    printf("strcat(str1, str2):  %s\n", str1);

    // strlen: string lenth
    len = strlen(str1);
    printf("strlen(str1):  %d\n", len);

    return 0;
}
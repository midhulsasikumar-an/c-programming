
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);
    for(int i = 0; i < len; i++)
        rev[i] = str[len - 1 - i];
    rev[len] = '\0';

    if(strcmp(str, rev) == 0)
        printf("String is palindrome.\n");
    else
        printf("String is NOT palindrome.\n");

    return 0;
}

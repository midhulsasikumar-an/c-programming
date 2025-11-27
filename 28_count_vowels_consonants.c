
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            char lower = (c >= 'A' && c <= 'Z') ? c + 32 : c;

            if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);

    return 0;
}

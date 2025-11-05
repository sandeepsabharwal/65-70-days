# Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    for(int i = 0; i < n; i++) {
        str[i] = tolower(str[i]);
    }
    for(int i = 0; i < n; i++) {
        if(str[i] != ' ') {
            str[i] = toupper(str[i]);
            break;
        }
    }

    printf("Sentence case:\n%s", str);
    return 0;
}

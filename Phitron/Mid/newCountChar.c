#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int main() {
    char str[1000];
    int counts[ALPHABET_SIZE] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            counts[str[i] - 'a']++;
        }
    }

    printf("Lowercase letter counts:\n");
    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (counts[i] > 0) {
            printf("%c: %d\n", 'a' + i, counts[i]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

void swapStrings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <string1> <string2>\n", argv[0]);
        return 1;
    }

    char *str1 = argv[1];
    char *str2 = argv[2];

    // printf("Before swapping:\n");
    // printf("String 1: %s\n", str1);
    // printf("String 2: %s\n", str2);

    // // Calling the swapStrings function with addresses of str1 and str2
    swapStrings(&str1, &str2);

    printf("\nAfter swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}
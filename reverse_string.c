#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int len = strlen(str) - 1;
    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--)
        putchar(str[i]);
}

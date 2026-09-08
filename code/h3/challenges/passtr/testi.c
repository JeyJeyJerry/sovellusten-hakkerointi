// passtr - a simple static analysis warm up exercise
// Copyright 2024 Tero Karvinen https://TeroKarvinen.com

#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    /* Build the password at runtime instead of storing it as a string literal. */
    const unsigned char parts[] = {
        's', 'a', 'l', 'a', '-', 'h', 'a', 'k',
        'k', 'e', 'r', 'i', '-', '3', '2', '1', '\0'
    };

    printf("What's the password?\n");
    scanf("%19s", password);

    if (0 == strcmp(password, (const char *)parts)) {
        printf("Yes! That's the password. FLAG{Tero-d75ee66af0a68663f15539ec0f46e3b1}\n");
    } else {
        printf("Sorry, no bonus.\n");
    }

    return 0;
}


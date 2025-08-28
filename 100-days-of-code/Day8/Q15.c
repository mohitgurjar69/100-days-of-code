#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check conditions
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special character\n");
    }

    return 0;
}
#include "main.h"
int _isupper(int c) {
    // Check if the character is an uppercase letter based on ASCII values
    if (c >= 'A' && c <= 'Z') {
        return 1; // Return 1 if the character is uppercase
    } else {
        return 0; // Return 0 if the character is not uppercase
    }
}

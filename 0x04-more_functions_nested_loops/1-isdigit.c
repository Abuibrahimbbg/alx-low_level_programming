#include "main.h"
int _isdigit(int c) {
    // Check if the character is a digit based on ASCII values
    if (c >= '0' && c <= '9') {
        return 1; // Return 1 if the character is a digit
    } else {
        return 0; // Return 0 if the character is not a digit
    }
}

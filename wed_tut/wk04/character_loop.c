//

#include <stdio.h>

int is_alpha(char character) {
    return ((character >= 'a' && character <= 'z') || 
            (character >= 'A' && character <= 'Z'));
}

int main(void) {

    char character;
    
    while (scanf("%c", &character) == 1) {
        // Check if the character is in the alphabet
        if (is_alpha(character)) {
            printf("'%c' scanned in!\n", character);
        }
    }

    return 0;
}

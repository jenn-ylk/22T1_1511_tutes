//

#include <stdio.h>

// check if a character is in the alphabet, return 1 if it is, 0 otherwise
int is_alpha(char character) {
    return ((character >= 'a' && character <= 'z') || 
            (character >= 'A' && character <= 'Z'));
}

int main(void) {

    char character;
    
    int result = scanf("%c", &character);
    while (result == 1) {
        if (is_alpha(character)) {
            printf("'%c' scanned in!\n", character);
        }
        
        // scan for the next input
        result = scanf("%c", &character);
    }

    return 0;
}

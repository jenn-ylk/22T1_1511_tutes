// A program that calls a function to operate on a string
// testing that function's behaviour

#define SIZE 128

int secret_function(char word[SIZE]);

int main(void) {

    // TODO: how does a string look in terms of an array?
    // 

    // TODO: (in memory) what's the difference?
    char word[SIZE] = "hello";
    char *word_ptr = "HELLO";
    
    printf("secret_function(\"%s\") returns %d\n", word, secret_function(word));
    printf("secret_function(\"%d\") returns %d\n", word_ptr, secret_function(word_ptr));
    return 0;
}

int secret_function(char word[SIZE]) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}


#include <stdio.h>

int main() {

        int letters = 0;
        int words = 0;
        char character;
        int space = 0;

        printf("Enter a Sentence: ");

        while((character = getchar()) != '\n') {
                if(character != ' ') {
                        if(!space) {
                                words++;
                                space = 1;
                        }
                        letters++;
                }
                else
                        space = 0;
        }
        printf("Average word length: %.1f", (float)letters/words);


        return 0;
}
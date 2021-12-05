#include <stdio.h>
#include <string.h>

int main()
{
        int length, i = 0;
        char str[128][20], smallest_word[20], largest_word[20];

        printf("Enter word: ");
        scanf("%s", str[i]);

        length = strlen(str[i]);

        strcpy(smallest_word, str[i]);
        strcpy(largest_word, str[i]);

        while(length != 4)
        {
                i++;
                printf("Enter word: ");
                scanf("%s", str[i]);

                if(strcmp(smallest_word, str[i]) > 0)
                {
                        strcpy(smallest_word, str[i]);
                }

                if(strcmp(largest_word, str[i]) < 0)
                {
                        strcpy(largest_word, str[i]);
                }
                length = strlen(str[i]);
        }

        printf("\nSmallest word: %s\n", smallest_word);
        printf("\nLargest word: %s\n", largest_word);
        printf("\n");
}
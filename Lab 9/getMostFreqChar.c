#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void counting(char *str, int array[])
{
        int i;
        for(i = 0; i < strlen(str); i++);
        {
                if(str[i] > 64 && str[i] < 91)
                str[i] = str[i] + 32;
        }

        for(i = 0; i < strlen(str); i++)
        {
                if(str[i] > 96 && str[i] < 123)
                array[str[i] - 97]++;
        }
}

int main()
{
        char character;
        int p = 0, f = 0, maximumfrequency = 0, t = 0;
        int equalfrequency[27];
        int frequency[27];

        memset(frequency, 0, sizeof(frequency));
        memset(frequency, 0, sizeof(equalfrequency));

        FILE *filePointer;
        filePointer = fopen("test.txt", "r");

        if (filePointer == NULL)
        {
                printf("File is not available \n");
        }

        else
        {
                while ((character = fgetc(filePointer)) != EOF)
                {
                        if (character == '\n')
                        break;

                        if (character >= 'a' && character <= 'z')
                        p = character - 'a';

                        else if (character >= 'A' && character <= 'Z')
                        p = character - 'A';

                        if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
                        frequency[p] += 1;
                }
                maximumfrequency = 0;

                for (f = 0; f<26; f++)
                {
                        if (frequency[f] > 0)
                        if (maximumfrequency < frequency[f])
                        {
                                p = f;
                                maximumfrequency = frequency[f];
                                t = 0;
                        }
                        if (maximumfrequency == frequency[f])
                        {
                                equalfrequency[t] = f;
                                t++;
                        }
                }

                printf("The most frequent letter is ");

                for (f = 0; f<t; f++)
                printf("'%c'", equalfrequency[f] + 'a' );
                printf(". It appeared %d times.\n", maximumfrequency);
        }

         fclose(filePointer);

        return 0;

}
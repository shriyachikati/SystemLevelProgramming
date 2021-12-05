#include <stdio.h>

//declaring a function to swap two character
void swap(char *x, char *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

//driver code
int main()
{
    //declaring two variables to store the two sentences
    char sentence1[100], sentence2[100];
    
    //declaring a variable for the index and initializing it to 0
    int i = 0;
  
    //prompting the user for the two sentences and storing them in the declared variables
    printf("Please enter the two sentences: \n");
    gets(sentence1);
    gets(sentence2);
  
    //swapping numericals with alphabets
    //runs the loop until the end of sentence1
    while(sentence1[i]!='\0')
    {
        /*swapping the character of sentence1 with that of sentence2 
        if the character in sentence1 is a digit*/
        if(isdigit(sentence1[i]))
        {
            swap(&sentence1[i], &sentence2[i]);
        }
        
        /*swapping the character of sentence1 with that of sentence2 
        if the character in sentence2 is a digit*/
        else if(isdigit(sentence2[i]))
        {
            swap(&sentence1[i], &sentence2[i]);
        }
        
        //incrementing the value of the index
        i++;
    }

    //printing the two sentences after swapping
    printf("The sentences after swapping numerics with alphabets in the two sentences are: \n");
    puts(sentence1);
    puts(sentence2);
    return 0;
}
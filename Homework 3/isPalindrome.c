#include <stdio.h>
#include<string.h>

//defining the function to check if it is a palindrome
int palindrome(char string[]){
        
        //declaring variables and initializing them to 0 and length of the string - 1
        //i is the value from the beginning of the loop
        //j is the value from the end of the loop
        int i = 0, j = strlen(string) - 1;
        
        //running a loop through the string
        for(i = 0; i < j;){

            //if the character is a space, incrementing the value of i
            if(string[i]==' '){
                i++;
                continue;
            }
            
            //if the character is a space, decrementing the value of j
            if(string[j] == ' '){
                j--;
                continue;
            }

            //comparing the characters from the first and the last
            //returning 0 if they are not equal
            if(string[i] != string[j]){
                return 0;
            }

            //incrementing the value of i
            i++;

            //decrementing the value of j
            j--;

        }
        return 1;
}

//driver code
int main() {
        
        //declaring variable for storing the string
        char string[200];

        //prompting the user for the string and storing it in the variable string
        printf("Enter string: ");
        scanf(" %[^\n]s",string);

        //calls the function and if it is true, prints that it is a palindrome
        if(palindrome(string) == 1)
                printf("The entered string is a palindrome\n");

        //calls the function and if it is false, prints that it is not a palindrome
        else
                printf("The entered string is not a palindrome\n");

        return 0;
}
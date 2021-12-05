#include <stdio.h>
#include <string.h>

int main()
{
    //declaring a variable for password
    char password[25];
    
    //declaring the variable for points deducted and initializing it to 0 
    int points = 0;
    
    /*declaring the variables for counting the number of lower case, upper case letters, 
    numbers, and consecutive characters and initializing them to 0*/
    int lower_count = 0, upper_count = 0, num_count = 0, con_count = 0;
    
    //prompting the user to enter the password and storing it in the variable password
    printf("Enter the password: ");
    scanf("%s",password); 
  
    //checking if the length of the password is less than 10
    if(strlen(password) < 10){
        //deducting 5 points for every missing character than 10
       for(int i=10; i>strlen(password); i--){
           points = points - 5;
       }
   }
    //checking the password for lower case letters
    for(int i=0; i<strlen(password); i++)
    {
        //incrementing lower_count for every lower case letter
        if(password[i] >= 'a' && password[i] <= 'z')
        {
            lower_count++;
        }
    }
  
    //deducting the points by 20 if lower case letter is missing
    if(lower_count <= 0)
    {
        points = points - 20;
    }

    //checking the password for upper case letters
    for(int i = 0; i<strlen(password); i++)
    {
        //incrementing upper_count for every upper case letter
        if(password[i] >= 'A' && password[i] <= 'Z')
        {
            upper_count ++;
        }
    }
  
    //deducting the points by 20 if upper case letter is missing
    if(upper_count <= 0) 
    {
        points = points - 20;
    }

    //checking the password for numbers
    for(int i = 0; i<strlen(password); i++)
    {
        //incrementing num_count for every number
        if(password[i] >= '0' && password[i] <= '9')
        {
            num_count++;
        }
    }
  
    //decreasing the points by 20 if number is missing
    if(num_count <= 0)
    {
        points = points - 20; 
    }

    //checking the password for consecutive characters
    for(int i=0; password[i+1] != '\0'; i++)
    {
            //incrementing con_count if the difference between consecutive characters is 1
            if(password[i-1] - password[i] == 1)
            {
                con_count += 1;
            }
    }
  
    //decreasing the points by 20 if more than one consecutive character is present
    if(con_count >= 1)
    {
        points = points - 20;
    }
  
    //printing the number of points deducted
    printf("The number of points deducted for your password: %d\n", points*(-1));
    
    //printing that the password is unsafe if the deduction is greater than 30
    if(points < -30)
    {
        printf("Your password is unsafe.");
    }
    
    //printing that the password is safe if the deduction is less than or equal to 30
    else
    {
        printf("Your password is safe.");
    }
  
return 0;
}

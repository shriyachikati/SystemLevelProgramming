#include <stdio.h>
#include <string.h>

int main()
{
    //declaring the variable to store the password
    char password[30];
    //declaring the variable for points
    int points = 0;
    
    //prompting the user to enter a password and scanning it
   printf("Please enter a password: ");
   scanf("%s", &password);
   
   //check if the length of the password is 10 and print that the password is safe if it is
   if(strlen(password) == 10){
       printf("The password is safe.");
   }
   
   //deduct points if the length of the password is less than 10
   else if(strlen(password) < 10){
       for(int i=10; i>strlen(password); i--){
           points = points - 5;
       }
   }
   
   //printing out the number of points deducted
   printf("Your number of points deducted is: %d\n", points*(-1));
   
    //check if the points deducted is greater than 30 and print that the password is unsafe if it is
       if(points < -30){
           printf("The password is unsafe! Please reset.");
       }
       else{
           printf("The password is safe.");
       }
   
   return 0;
}

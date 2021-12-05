#include <stdio.h>

//declaring a struct to sore the country and its dialing code
struct dialing_code {
    char *country;
    int code;
};

//driver code
int main (int argc, char* argv[]) {
    //declaring variables to store the code and the index of the array
    int intl_code, i;
    
    //storing the countries and their codes
    const struct dialing_code country_codes[] = {
        {"Argentina",       54}, {"Bangladesh",        880},
        {"Brazil",          55}, {"Burma (Myanmar)",    95},
        {"China",           86}, {"Colombia",           57},
        {"Congo,Dem.",      243}, {"Egypt",              20},
        {"Ethiopia",        251}, {"France",             33},
        {"Germany",         49}, {"India",              91},
        {"Indonesia",       62}, {"Iran",               98},
        {"Italy",           39}, {"Japan",              81},
        {"Mexico",          52}, {"Nigeria",           234},
        {"Pakistan",        92}, {"Philippines",        63},
        {"Poland",          48}, {"Russia",              7},
        {"South Africa",    27}, {"South Korea",        82},
        {"Spain",           34}, {"Sudan",              249},
        {"Thailand",        66}, {"Turkey",              90},
        {"Ukraine",         380}, {"United Kingdom",     44},
        {"United States",   1}, {"Vietnam",              84},
        };

    int n_entries = sizeof(country_codes) / sizeof(*country_codes);

    
    do {
        int found = 0;

        //prompting the user to enter the international code and storing it in the variable intl_code
        printf("Please input the international code and enter -1 to exit: ");
        scanf("%d", &intl_code);
        
        //exit the program if the user input is -1
        if (intl_code == -1)
            break;
  
        //running through the entries
        for (i = 0; i < n_entries; i++) {
            
            //prints the name of the country if the code is found
            if (country_codes[i].code == intl_code) {
                printf("The country is: %s\n", country_codes[i].country);
                found = 1;
            }
        }
        
        //prints that the code is not found if it is not found
        if (!found)
            printf("Error: code not found.\n");
    } while(1);

    return 0;
}


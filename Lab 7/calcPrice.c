#include <stdio.h>

int main()
{
    int itemNumber, quantity, month, day, year;
    float unitPrice, totalAmount;
    
    //Prompting the user for the item number
    printf("Enter item number: ");
    //Scanning the item number
    scanf("%d", &itemNumber);
    
    //Prompting the user for the unit price
    printf("Enter unit price: ");
    //Scanning the unit price
    scanf("%f", &unitPrice);
    
    //Prompting the user for the quantity
    printf("Enter the quantity: ");
    //Scanning the quantity
    scanf("%d", &quantity);
    
    //Prompting the user for the date of purchase
    printf("Enter the purchase date (mm/dd/yyyy): ");
    //Scanning the date of purchase
    scanf("%d/%d/%d", &month, &day, &year);
    
    //Calculating the total amount of the units
    totalAmount = unitPrice * quantity;
    
    printf("\nItem\t\tUnit Price\t\tQTY\t\tPurchase Date\t\tTotal Amount");
    printf("\n%-5d\t\t$%10.2f\t\t%-5d\t\t%d/%d/%-5d\t\t$%10.2f", itemNumber, unitPrice, quantity, month, day, year, totalAmount);

    return 0;
}

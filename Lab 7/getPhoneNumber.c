#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter phone number [ (999) 999-9999 ]: ");
    scanf("(%d) %d-%d", &a, &b, &c);
    printf("You entered %d-%d-%d", a, b, c);

    return 0;
}

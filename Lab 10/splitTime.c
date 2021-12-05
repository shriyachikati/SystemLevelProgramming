#include <stdio.h>

void split_time(int, int *, int *, int *);

int main()
{
    int n, hr, min, sec;
    
    printf("Enter seconds: ");
    scanf("%d",&n);
    
    split_time(n, &hr, &min, &sec);

    printf("Converted format: %d hours %d mins %d secs \n", hr, min, sec);
    return 0;
}

void split_time(int n, int *hr, int *min, int *sec){
    *hr = n / 3600;
    *min = (n % 3600) / 60;
    *sec = (n % 3600) % 60;
}

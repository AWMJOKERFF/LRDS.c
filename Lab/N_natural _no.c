#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the upper limit
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Validate if the input is a valid natural number (greater than 0)
    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; 
    }

    printf("The first %d natural numbers are:\n", n);

    // Loop starts from 1 and goes up to N
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    
    printf("\n");
    return 0;
}


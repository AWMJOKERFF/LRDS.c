#include <stdio.h>

int main() {
    int n;
    int prime_count = 0; // Tracks how many prime numbers we have found so far
    int i = 2;           // The number currently being tested for primality

    // Prompt user for input
    printf("Enter the number of prime numbers to print (n): ");
    scanf("%d", &n);

    printf("The first %d prime numbers are:\n", n);

    // Keep looking for primes until we have found 'n' of them
    while (prime_count < n) {
        int count = 0; // Resets the factor counter for each new number 'i'

        // --- Code structure from your image ---
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d ", i);
            prime_count++; // Increment the total number of primes found
        }
        // --------------------------------------

        i++; // Move to the next number to test
    }

    printf("\n");
    return 0;
}

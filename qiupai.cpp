#include <stdio.h>

#define PI_MULTIPLIER 4.0
#define LOOP_LIMIT 10000000
#define TWO 2

// Function to calculate the sign based on the parity of the number
int calculate_sign(int number) {
    return (number & 1) ? -1 : 1;
}

// Function to calculate the term in the series
double calculate_term(int i) {
    return calculate_sign(i) / (TWO * i + 1.0);
}

// Function to sum the series
double sum_series() {
    double sum = 0.0;
    for (int i = 0; i < LOOP_LIMIT; i++) {
        sum += calculate_term(i);
    }
    return sum;
}

int main() {
    double pi = sum_series() * PI_MULTIPLIER;
    printf("The approximate value of pi is: %.15f\n", pi);
    return 0;
}


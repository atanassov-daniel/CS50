#include <cs50.h>
#include <stdio.h>
// truncation
int main(void) {
    int num1 = get_int("First Number: ");
    int num2 = get_int("Second Number: ");

    // if we don't cast the integers to floats, their sum will be with the decimal part truncated, an integer, which will simply be stored in a variable of type float, which doesn't really matter
    float result = num1 / (float) num2;

    printf("%i / %i = %f\n", num1, num2, result);
}
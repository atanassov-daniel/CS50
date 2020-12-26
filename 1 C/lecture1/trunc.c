#include <cs50.h>
#include <stdio.h>

int main(void) {
    int num1 = get_int("First Number: ");
    int num2 = get_int("Second Number: ");

    float result = num1 / num2;

    printf("%i / %i = %f\n", num1, num2, result);
}
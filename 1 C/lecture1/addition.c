#include <cs50.h>
#include <stdio.h>

int main(void) {
    long num1 = get_long("First Number: ");
    long num2 = get_long("Second Number: ");

    long result = num1 + num2;

    printf("%li + %li = %li\n", num1, num2, result);
}
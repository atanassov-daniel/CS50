#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long num = get_long("Card number: ");

    int firstNum = num / 10 / 10 / 10 / 10;

    for(int counter = 0; counter <= 9; counter++) {
        printf("%i / 10 = %i\n", counter, (counter / 10) ); // == 0 for every number from 0 to 9
        printf("%i modulo 10 = %i\n\n", counter, (counter % 10) ); // equal to the number
    }
}
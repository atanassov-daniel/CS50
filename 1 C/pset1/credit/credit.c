#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long num = get_long("Card number: "); // get the card number

    long currentNum = num; // copy the value of the currentNumber so that I can manipulate it

    int counter  = 0; // counter for the length of the card number

    int sumEven = 0; // sum of the doubled value of the second to last digit and the other digits with secondToLast -= 2
    int sumOdd = 0; // sum of the digits from the digit at the end and the other digits with lastDigit -= 2

    // iterate over every digit of the card number
    while (currentNum != 0 || currentNum % 10 != currentNum)
    {
        counter++;

        int lastDigit = currentNum % 10; // current last digit of the number

        if (counter % 2 == 0) // the second-to-last digit and the digits in interval of 2 before it
        {
            int doubled = lastDigit * 2; // the value of the digit must be doubled

            // iterate over every digit of the doubled value of the current last digit
            while (doubled != 0 || doubled % 10 != doubled)
            {
                int last = doubled % 10;
                sumEven += last; // last digit of the doubled current digit

                doubled = doubled / 10; // remove the last digit from the number
            }
        }
        else
        {
            sumOdd += lastDigit;
        }

        currentNum = currentNum / 10; // remove the last digit from the number
    }

    int sumTotal = sumEven + sumOdd;

    if (sumTotal % 10 != 0) // % 10 to get the last digit of the sum
    {
        printf("INVALID\n");
        return 0;
    }

    int exponent = counter - 2;
    long power = pow(10, exponent); // % 10 will get the last number, % 100 will get the last two numbers, with this power I can get the first 2 numbers // counter - 2 so that I can get the first 2 numbers

    /* with this I had 1.00/1.00 in style50 ->
    long power = pow(10,
                     exponent); // % 10 will get the last number, % 100 will get the last two numbers, with this power I can get the first 2 numbers // counter - 2 so that I can get the first 2 numbers
    */

    power = (long) power;
    int firstTwo = num / power; // take the first 2 numbers

    if (counter == 15 && (firstTwo == 34 || firstTwo == 37))
    {
        printf("AMEX\n");
    }
    else if (counter == 16 && (firstTwo == 51 || firstTwo == 52 || firstTwo == 53 || firstTwo == 54 || firstTwo == 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((counter == 13 || counter == 16) && (firstTwo / 10 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
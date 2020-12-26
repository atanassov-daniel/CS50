#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float changeOwed;

    do
    {
        changeOwed = get_float("How much change is owed? ");
    }
    // if the value is negative, reprompt the user for a valid value
    while (changeOwed < 0);

    float currentChange = round(changeOwed * 100); // convert the dollars in cents

    int neededCoins = 0;

    while (currentChange >= 0)
    {

        if (currentChange == 0)
        {
            printf("The minimum number of coins with which the change %.2f can be made is: \n", changeOwed);
            printf("%i\n", neededCoins);
            return (0);
        }

        if (currentChange - 25 >= 0)
        {
            neededCoins++;
            currentChange -= 25;
        }
        else if (currentChange - 10 >= 0)
        {
            neededCoins++;
            currentChange -= 10;
        }
        else if (currentChange - 5 >= 0)
        {
            neededCoins++;
            currentChange -= 5;
        }
        else if (currentChange - 1 >= 0)
        {
            neededCoins++;
            currentChange -= 1;
        }
    }

}
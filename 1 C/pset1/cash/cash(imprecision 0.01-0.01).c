#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    float changeOwed;

    do
    {
        changeOwed = get_float("How much change is owed? ");
    }
    // if the value is negative, reprompt the user for a valid value
    while (changeOwed < 0);

    float currentChange = changeOwed;

    int neededCoins = 0;

    printf("%f\n", currentChange * 100);
    return(0);

    while (currentChange > 0)
    {

        if(currentChange - 0.25 >= 0)
        {
            neededCoins++;
            currentChange -= 0.25;
            // printf("%f\n", currentChange);
        }
        else if(currentChange - 0.10 >= 0)
        {
            neededCoins++;
            currentChange -= 0.10;
            // printf("%f\n", currentChange);
        }
        else if(currentChange - 0.05 >= 0)
        {
            neededCoins++;
            currentChange -= 0.05;
            // printf("%f\n", currentChange);
        }
        else if(currentChange - 0.01 >= 0 || currentChange - 0.01 == -0.000000)
        {
            neededCoins++;
            currentChange -= 0.01;
            // printf("%f\n", currentChange);
        } else{
            // printf("%\n", currentChange - 0.01 == -0);
            printf("%s\n", currentChange - 0.01 == -0.000000 ? "true" : "false");
            return(0);}
    }

    if (currentChange == 0)
    {
        // printf("The minimum number of coins with which the change %f can be made is %i", change, neededCoins);
        printf("The minimum number of coins with which the change %f can be made is: \n", changeOwed);
        printf("%i\n", neededCoins);
        // return(0);
    }
}
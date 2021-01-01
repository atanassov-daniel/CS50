#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string str = "HELLO";

    int num = 13;

    int rest = num;

    // if(rest > 26)
    /* if(rest > 26)
    {
        int timesWholeIn = num / 26; // how many times 26 is in the number, because I should just start counting back over from A and replace the eltter with another letter, not any symbol
        rest = num % (timesWholeIn * 26); // to get the rest[0-26]
        printf("%i\n", rest);
    } */

    /* for(int i = 0, n = strlen(str); i < n; i++)
    {
        // from the character to 95 or so?
        if (isalpha(str[i]))
        {
            printf("%c", str[i] + rest);
        }
    } */


    for(int i = 0, n = strlen(str); i < n; i++)
    {
        rest = num;
        char letter = str[i];

        if((letter + num) > 26)
        {
            int timesWholeIn = (letter + num) / 26; // how many times 26 is in the number, because I should just start counting back over from A and replace the eltter with another letter, not any symbol
            rest = (letter + num) % (timesWholeIn * 26); // to get the rest[0-26]
            // printf("%i\n", rest);
        }
        // from the character to 95 or so?
        if (isalpha(letter))
        {
            printf("%c", letter + rest);
        }
    }

    printf("\n");
}
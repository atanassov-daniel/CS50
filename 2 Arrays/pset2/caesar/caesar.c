// We shouldn’t necessarily assume that the user’s key is going to be a number; though you may assume that, if it is a number, it will be a positive integer.
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void encrypt(string input, int key);

int main(int argc, string argv[])
{
    string input = argv[1]; // key for encryption

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (input[i] != '0' && input[i] != '1' && input[i] != '2' && input[i] != '3' && input[i] != '4' && input[i] != '5'
            && input[i] != '6' && input[i] != '7' && input[i] != '8' && input[i] != '9')
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(input);

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");
    encrypt(plaintext, key);
    printf("\n");

    return 0;
}

void encrypt(string input, int key)
{
    int rest = key;

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        rest = key;
        char letter = input[i];

        if (isalpha(letter))
        {
            int start;
            if (isupper(letter))
            {
                start = 65;
            }
            else if (islower(letter))
            {
                start = 97;
            }
            /* 0.93 style50 this way:
            if (isupper(letter)) start = 65;
            if (islower(letter)) start = 97; */

            if ((letter - start + key) >= 26)
            {
                // how many times 26 is in the number, because I should just wrap up and start counting back over from A and replace the eltter with another letter, not any symbol
                int timesWholeIn = (letter - start + key) / 26;
                rest = (letter - start + key) % (timesWholeIn * 26); // to get the rest[0-26]
                printf("%c", start + rest);
            }
            else
            {
                printf("%c", letter + rest);
            }
        }
        else
        {
            printf("%c", letter);
        }
    }
}
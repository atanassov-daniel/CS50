#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int find_letter_index(char letter);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Invalid command-line arguments!\n"); // Usage: ./substitution key
        return 1;
    }

    string key = argv[1];

    if (strlen(key) != 26)
    {
        // the key is invalid (as by not containing 26 characters, containing any character that is not an alphabetic character, or not containing each letter exactly once)
        printf("Substitution key must be 26 characters long!\n"); // Usage: ./substitution key
        return 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (isalpha(key[i]) == false)
        {
            printf("Substitution key must only contain alphabetical characters!\n"); // Usage: ./substitution key
            return 1;
        }
        // check if the character is contained only once, else it is invalid
        for (int j = i - 1; j >= 0; j--)
        {
            if (key[j] == key[i])
            {
                printf("Each character must come only once in the key!\n");
                return 1;
            }
        }
    }

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char letter = plaintext[i];
        int index = find_letter_index(tolower(letter));

        if (isupper(letter))
        {
            printf("%c", toupper(key[index]));
        }
        else if (islower(letter))
        {
            printf("%c", tolower(key[index]));
        }
        else // if it isn't an alphabetical character
        {
            printf("%c", letter);
        }
    }

    printf("\n");
    return 0;
}

int find_letter_index(char letter) // , string letters
{
    if (letter == 'a') return 0;
    else if (letter == 'b') return 1;
    else if (letter == 'c') return 2;
    else if (letter == 'd') return 3;
    else if (letter == 'e') return 4;
    else if (letter == 'f') return 5;
    else if (letter == 'g') return 6;
    else if (letter == 'h') return 7;
    else if (letter == 'i') return 8;
    else if (letter == 'j') return 9;
    else if (letter == 'k') return 10;
    else if (letter == 'l') return 11;
    else if (letter == 'm') return 12;
    else if (letter == 'n') return 13;
    else if (letter == 'o') return 14;
    else if (letter == 'p') return 15;
    else if (letter == 'q') return 16;
    else if (letter == 'r') return 17;
    else if (letter == 's') return 18;
    else if (letter == 't') return 19;
    else if (letter == 'u') return 20;
    else if (letter == 'v') return 21;
    else if (letter == 'w') return 22;
    else if (letter == 'x') return 23;
    else if (letter == 'y') return 24;
    else if (letter == 'z') return 25;
    else return -1;
}
// testInput(){}
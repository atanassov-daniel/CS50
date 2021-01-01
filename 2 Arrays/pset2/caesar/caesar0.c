// We shouldn’t necessarily assume that the user’s key is going to be a number; though you may assume that, if it is a number, it will be a positive integer.
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[]){
    string input = argv[1]; // key for encryption

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for(int i = 0, n = strlen(input); i < n; i++)
    {
        if(input[i] != '0' && input[i] != '1' && input[i] != '2' && input[i] != '3' && input[i] != '4' && input[i] != '5' && input[i] != '6' && input[i] != '7' && input[i] != '8' && input[i] != '9')
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(input);
    printf("%i\n", key);
}
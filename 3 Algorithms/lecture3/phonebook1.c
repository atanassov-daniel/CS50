#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <ctype.h> to implement lowercasing for better searching

typedef struct
{
    string name;
    string number;
}
person;

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Invalid command-line arguments\n");
        return 1;
    }
    // check if it is an integer

    int count = atoi(argv[1]);

    person phonebook[count];

    for(int j = 0; j < count; j++)
    {
        phonebook[j].name = get_string("What's their name? ");
        phonebook[j].number = get_string("What's their phone number? ");
    }

    string searched = get_string("Who are you searching for? ");

    for(int i = 0; i < count; i++)
    {
        // tolower each character
        if (strcmp(phonebook[i].name, searched) == 0) // only when the return value is 0 , we have a match, it returns a neg. number if the first string comes before the other in the ASCII table
        {
            printf("%s's number is : %s\n", searched, phonebook[i].number);
            return 0;
        }
    }
    printf("Couldn't find '%s'\n", searched);
    return 1;
}
/* Output:
./phonebook1 2
What's their name? David
What's their phone number? +359885642315
What's their name? Brian
What's their phone number? +14045238726
Who are you searching for? Brian
Brian's number is : +14045238726
*/
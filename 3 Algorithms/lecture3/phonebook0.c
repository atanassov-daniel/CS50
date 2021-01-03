#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person phonebook[2];
    phonebook[0].name = "Brian";
    phonebook[0].number = "+359887885236";
    phonebook[1].name = "David";
    phonebook[1].number = "+359776553997";

    string searched = "David";

    for(int i = 0; i < 7; i++)
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
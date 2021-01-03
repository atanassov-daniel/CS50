#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get_string("Who would you like to search for? ");
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"}; // the names are sorted in alpahbetical order in advance, sow e can use a better approach than linear search
    // length is 7
    string searched = "RoN";

    // tolower()

    for(int i = 0; i < 7; i++)
    {
        // tolower each character
        if (strcmp(names[i], searched) == 0) // only when the return value is 0 , we have a match, it returns a neg. number if the first string comes before the other in the ASCII table
        {
            printf("Found '%s' at index %i\n", searched, i);
            return 0;
        }
    }
    printf("Couldn't find '%s'\n", searched);
    return 1;

    // printf("%s\n", names[6]);
}
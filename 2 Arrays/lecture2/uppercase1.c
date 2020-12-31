#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    // toupper will only uppercase the character if it can be uppercased, so all of this is unneeded
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if(islower(s[i])) // from lowercase to uppercase
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

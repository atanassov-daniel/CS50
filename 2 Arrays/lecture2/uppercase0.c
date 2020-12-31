#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    string s = get_string("Before: ");
    printf("After: ");

    for(int i = 0, n = strlen(s); i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') // from lowercase to uppercase
        {
            printf("%c", s[i] - 32); // that's not the best because we'll probably forget in some time what 32 is
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");

    // Before: hello, world, hello Anna, hallo BENNO
    // After: HELLO, WORLD, HELLO ANNA, HALLO BENNO
}

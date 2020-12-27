#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string str = get_string("Card number: ");
    int length = strlen(str);

    printf("%s\n", str);
    printf("%i\n", length);
    printf("%i\n", str[1]);

    /* for(int i = 0; i < length; i++)
    {
        printf("%c\n", str[i]);
    } */
}
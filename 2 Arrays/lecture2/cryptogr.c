#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string plain = get_string("Text to encrypt: ");

    for(int i = 0, n = strlen(plain); i < n; i++)
    {
        if(plain[i] != ' ') printf("%c", plain[i] + 1);
        else printf("%c", plain[i]);
    }
    printf("\n");
}
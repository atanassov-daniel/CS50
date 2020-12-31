#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";

    // printf("%s\n", s);
    // printf("%c %c %c %c\n", s[0], s[1], s[2], s[3]); // (H I ! ) as output
    // printf("%c %c %c %c\n", s[0], s[1], s[2], s[400]); // (H I ! ) as output
    // printf("%i %i %i %i\n", s[0], s[1], s[2], s[4]); // (72 73 33 37) as output

    printf("%i %i %i %i\n", s[0], s[1], s[2], s[4]); // (72 73 33 24) as output
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[455]); // (72 73 33 0) as output
    // when I print both of the top two lines, the output of the first is (72 73 33 -24)
}
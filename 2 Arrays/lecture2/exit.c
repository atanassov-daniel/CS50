#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if(argc != 2) // the human is not doing what I want them to
    {
        printf("missing command-line argument\n");
        return 1; // an error code/exit code
    }
    printf("hello, %s\n", argv[1]);
    return 0; // explicity return it
}
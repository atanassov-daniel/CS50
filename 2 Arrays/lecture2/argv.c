#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if(argc == 2) // if the human typed in 2 total words -> the name of the program and an argument
    {
        printf("hello, %s\n", argv[1]); // argv[0] would be the program's name, at position [1] is the fisrt actually useful argument
    }
    /* else
    {
        printf("hello, world\n");
    } */
}
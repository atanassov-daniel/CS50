#include <cs50.h>
#include <stdio.h>
#include <string.h>

int countLetters(string input);
int countWords(string input);
int countSentences(string input);

int main(void)
{
    string text = get_string("Text: ");
    // float index = 0.0588 * L - 0.296 * S - 15.8
    // L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.

    int letters = countLetters(text);
    int words = countWords(text);
    int sentences = countSentences(text);

    printf("Letters = %i\n", letters);
    printf("Words = %i\n", words);
    printf("Sentences = %i\n", sentences);

    float lettersPer100 = (float) letters / words;
    float sentencesPer100 = (float) sentences / words;

    double index = 0.0588 * lettersPer100 - 0.296 * sentencesPer100 - 15.8;

    printf("%f\n", index);
    // round the integer to the nearest number
}

int countLetters(string input)
{
    int letters = 0;

    for(int i = 0, n = strlen(input); i < n; i++)
    {
        char letter = input[i];
        bool isLetter = (letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z');

        if(isLetter)
        {
            letters++;
        }
    }

    return letters;
}

int countWords(string input)
{
    int words = 0;

    for(int i = 0, n = strlen(input); i < n; i++)
    {
        char letter = input[i];
        bool isEnd = letter == ' ' || letter == '.' || letter == '!' || letter == '?'; // end of a word or a sentence

        if(isEnd)
        {
            if(i + 1 <= n) // otherwise there will be no next character, that's the end of the string altogether
            {
                char next = input[i + 1];
                if(next != ' ') // if the next character is a space, then the current one is [.!?] so I won't count it and count just the space after it
                {
                    words++;
                }
            }
        }
    }

    return words;
}

int countSentences(string input)
{
    int sentences = 0;

    for(int i = 0, n = strlen(input); i < n; i++)
    {
        char letter = input[i];
        bool isEnd = letter == '.' || letter == '!' || letter == '?'; // end of a word or a sentence

        if(isEnd)
        {
            sentences++;
        }
    }

    return sentences;
}
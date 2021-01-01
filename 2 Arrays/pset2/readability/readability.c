#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count(string input);

int main(void)
{
    string text = get_string("Text: ");
    // float index = 0.0588 * L - 0.296 * S - 15.8
    // L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.

    float letters = 0;
    float words = 0;
    float sentences = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char letter = text[i];

        // count letters
        bool isLetter = (letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z');
        if (isLetter)
        {
            letters++;
        }

        // count words
        bool isEnd = letter == ' ' || letter == '.' || letter == '!' || letter == '?'; // end of a word or a sentence

        if (isEnd)
        {
            if (i + 1 <= n) // otherwise there will be no next character, that's the end of the string altogether
            {
                char next = text[i + 1];
                // ⇩ if the next character is a space, then the current one is [.!?] so I won't count it and count just the space after it
                if (next != ' ')
                {
                    words++;
                }
            }
        }

        // count sentences
        if (letter == '.' || letter == '!' || letter == '?') // end of a sentence
        {
            sentences++;
        }
    }

    // float letters = (float) countLetters(text);
    // float words = (float) countWords(text);
    // float sentences = (float) countSentences(text);

    // printf("Letters = %f\n", letters);
    // printf("Words = %f\n", words);
    // printf("Sentences = %f\n", sentences);

    float lettersPer100 = letters / words * 100;
    // printf("%f\n", lettersPer100);
    float sentencesPer100 = sentences / words * 100;
    // printf("%f\n", sentencesPer100);

    float index = 0.0588 * lettersPer100 - 0.296 * sentencesPer100 - 15.8;
    // printf("%f\n", index);
    int grade = round(index); // we have to round the number to the nearest integer

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}
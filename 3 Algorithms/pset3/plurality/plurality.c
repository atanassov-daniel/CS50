// https://manual.cs50.io/3/strcmp
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);
int find_candidate(string searched, candidate array[], int length);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    int indexCandidate = find_candidate(name, candidates, candidate_count);

    if (indexCandidate == 404)
    {
        return false;
    }
    else
    {
        candidates[indexCandidate].votes++;
        return true;
    }
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int winnerVotes = -1;

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > winnerVotes)
        {
            winnerVotes = candidates[i].votes;
        }
    }

    for (int j = 0; j < candidate_count; j++)
    {
        if (candidates[j].votes == winnerVotes)
        {
            printf("%s\n", candidates[j].name);
        }
    }
    return;
}

int find_candidate(string searched, candidate array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (strcmp(array[i].name, searched) == 0)
        {
            return i;
        }
    }
    // if a candidate with this name was not found in the whole array, exit with code 404
    return 404;
}
/*
doesn't work exactly as I think is corrent, but check50 says ALL IS WELL

$ ./plurality Alice Bob
Number of voters: 3
Vote: asds
Invalid vote.
Vote: dfg
Invalid vote.
Vote: rfg
Invalid vote.
Alice
Bob
*/
#include <cs50.h>
#include <stdio.h>

// create an array of candidates
// Search the array to find the most votes awarded to any single candidate.
//Print out that candidates name.


typedef struct {
    string name;
    int votes;
}
candidate;

int main(void)
{
    const int num_candidates = 3;
    candidate candidates[num_candidates];

    candidates[0].name = "Carter";
    candidates[0].votes = 10;

    candidates[1].name = "Jowamu";
    candidates[1].votes = 12;

    candidates[2].name = "Inno";
    candidates[2].votes = 7;

    // TODO: Find highest number of votes
    // Use linear search
    // Which structure will be good
    int highest_votes = 0;
    for (int i = 0; i < num_candidates; i++)
    {
        if (candidates[i].votes > highest_votes)
        {
            highest_votes = candidates[i].votes;
        }
    }
    printf("%i\n", highest_votes);

    // TODO:  Print name of canditate with highest
    for (int i = 0; i < num_candidates; i++)
    {
        // does this candidate have the highest number of votes
        if (candidates[i].votes == highest_votes)
        {
            printf("%s\n", candidates[i].name);
        }
    }

}

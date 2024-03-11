#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "csc.h"

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}; 

int compute_score(string word);

int main(void)
{
    // Get input from both players
   string word1 = getString("Player 1: ");
   string word2 = getString("Player 2: ");


    // Score both words
    int score1 = compute_score(word1);
   int score2 = compute_score(word2);

    // TODO: Print the Winner
    printf("Score 1 :%i\n", score1);
    printf("Score 2 :%i\n", score2);

}

int compute_score(string word)
{
    int score = 0;
    // TODO: Compute and return score for string
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        word[i] = toupper(word[i]);
        if (isalpha(word[i]))
        {
            score += POINTS[word[i] - 65];
        }
        
    }
    return score;
}
#include <stdio.h>
#include <ctype.h>
#include "csc.h"
#include <string.h>
#include <math.h>

int main(void)
{
    int index=0;
    float l,s;
    int letter=0; 
    int sentence=0;
    string text = getString("Text:");
    //string text = "Congratulations! Today is your day. You’re off to Great Places! You’re off and away!";
    int words = 0;
    for (int i = 0;i < strlen(text);i++)
    {
        if (isalpha(text[i]))
        {
            words++;
        }
        else if (isspace(text[i]))
        {
            letter++;
        }
        else if(text[i]=='!'||text[i]=='?'||text[i]=='.')
        {
            sentence++;
        }
    }
    //printf("No of letter: %d\n", words);
    //printf("No of words: %d\n", letter);
    //printf("No of sentence: %d\n", sentence);
    l= (float) words/ (float) letter * 100;
    //printf("%f\n",l);
    
    s = (float) sentence / (float) letter * 100;
    //printf("%f\n",s);
      

    index = 0.0588 * l - 0.296 * s - 15.8;
    printf("Grade %i\n",index);
    
}

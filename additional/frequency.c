#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    scanf("%[^\n]*c", str);

    int freq[26] = {0};
    int count;
    for(int i=0;str[i] != '\0';i++)
    {
        freq[str[i] - 'a']++;
    }
    for (int i = 0; i < 26 ; i++)
    {
        if(freq[i] != 0)
        {
            printf("%c - %i\n", i + 'a', freq[i]);
        }
    }
}

#include <stdio.h>
int main()
{
   
    char word[50];
    printf("Enter a string: ");
    scanf("%[^\n]s",word);
    int i =0;
    int count=0;

    while(word[i] != '\0')
    {
        if(word[i]=='a' || word[i] == 'e' || word[i] == 'i' || word[i] =='o' || word[i] == 'u')
        {
            count++;
        }
    }
    printf("Count %d",count);
}



#include <stdio.h>
#include <stdlib.h>

typedef char* string;
int getInt(string prompt);
double getFloat(string prompt);
string getString(string prompt);
char getChar(string prompt);
long getLong(string prompt);
double getDouble(string prompt);

int getInt(string prompt)
{
    int i = 0;
    printf("%s", prompt);
    scanf("%i", &i);
    return i;
}

double getDouble(string prompt)
{
    double i = 0;
    printf("%s", prompt);
    scanf("%lf", &i);
    return i;
}

long getLong(string prompt)
{
    long i = 0;
    printf("%s", prompt);
    scanf("%li", &i);
    return i;
}

double getFloat(string prompt)
{
    float i = 0;
    printf("%s", prompt);
    scanf("%f", &i);
    return i;
}

string getString(string prompt)
{
    string word = NULL;
    long int inputSize;
    printf("%s", prompt);
    if (getline(&word, &inputSize, stdin) >= 0)
    {
        return word;
    }
}

char getChar(string prompt)
{
    char character;
    printf("%s", prompt);
    scanf("%c", &character);
    return character;
}


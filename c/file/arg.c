#include <stdio.h>
#include <stdint.h>
#include "csc.h"

typedef uint8_t BYTE;

int main(int argc, string argv[])
{
string filename = argv[1];
if (argc != 2)
{
printf("Enter a filename.\n");
return 1;
}

FILE *input = fopen(filename, "r");
if (input == NULL)
{
printf("No such file found.\n");
return 2;
}

BYTE buffer[4];

int signature [] = {37, 80, 68, 70};

fread(buffer, 1, 4, input);

for (int i = 0; i < 4; i++)
{
if (buffer[i] != signature[i])
{
printf("Likely not a pdf\n");

fclose(input);
return 0;
}
}
printf("Likely a pdf.\n");
fclose(input);
}

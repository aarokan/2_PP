#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc < 2 || argc > 3)
    {
        printf("Please enter only one number as an argument for example ./3_sequence 4 ")
        return 1;
    }
    
    printf("argc %i", argc);
    string StrSize = argv[1];

    // convert string to integer
    int size = atoi(StrSize);

    int sequence[size];

    sequence[0] = 1;
    printf("%i\n", sequence[0]);

    for (int i = 1; i < size; i++)
    {
        sequence[i] = sequence[i - 1] * 2;
        printf("%i\n", sequence[i]);
    }
    printf("\n");
    return 0;
}
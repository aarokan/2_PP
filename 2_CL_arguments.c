#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    printf("argc : %i", argc);
    
    // loop through argv array and print arguments
    for (int i = 0; i < argc; i++)
    {
        printf("\nargv[%i] : %s", i, argv[i]);
    }
    printf("\n");
}
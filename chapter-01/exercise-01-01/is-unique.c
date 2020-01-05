#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool have_unique_characters(char * s)
{
    for (int i = 0; i < strlen(s) - 1; ++i)
    {
        for (int j = i + 1; j < strlen(s); ++j)
        {
            if (*(s + i) == *(s + j))
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    char test_string_hello[] = "Hello";
    char test_string_world[] = "world";
    
    if (have_unique_characters(test_string_hello))
    {
        printf("The vord %s have all unique characters.\n", test_string_hello);
    }
    else
    {
        printf("The word %s does not have all unique characters.\n", 
                test_string_hello);
    }
    
    if (have_unique_characters(test_string_world))
    {
        printf("The word %s have all unique character.s\n", test_string_world);
    }
    else
    {
        printf("The word %s does not have all unique characters.\n", 
                test_string_world);
    }
    
    return EXIT_SUCCESS;
}


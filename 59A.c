#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main(void)
{
    char input[100];
    scanf("%100s", input);
    int a = 0;
    int b = 0;
    
    for(int i = 0; i < strlen(input); i++)
    {
        if(input[i] >= 'A'  && input[i] <= 'Z')
        {
            a = a + 1;
        }
        else if(input[i] >= 'a'  && input[i] <= 'z')
        {
            b = b + 1;
        }
    }
 
    if(a > b)
    {
        for(int i = 0; i < strlen(input); i++)
        {
            if(input[i] >= 'a'  && input[i] <= 'z')
            {
                input[i] = input[i] - 32;
            }
        }
    }
 
    else if(a < b)
    {
        for(int i = 0; i < strlen(input); i++)
        {
            if(input[i] >= 'A'  && input[i] <= 'Z')
            {
                input[i] = input[i] + 32;
            }
        }
    }
 
    printf("%s\n", input);
}
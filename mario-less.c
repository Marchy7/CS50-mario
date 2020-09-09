#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare variable
    int n;
    // prompt for integer between 1 and 8
    do
    {
        n = get_int("Height: ");
    }
    while (n <= 0 || n >= 9);
    
    //make boxes
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
            printf(" ");
                
            else
            printf("#");
        }
            
        printf("\n");
           
    }
}

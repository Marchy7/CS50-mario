  
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
    if (n == 1)
    {
        printf("#  #\n");
    }
    
    if (n == 2)
    {
        printf(" #  #\n");
        printf("##  ##\n");
    }     
    
    if (n == 3)
    {
        printf("  #  #\n");
        printf(" ##  ##\n");
        printf("###  ###\n");
    }   
    
    if (n == 4)
    {
        printf("   #  #\n");
        printf("  ##  ##\n");
        printf(" ###  ###\n");
        printf("####  ####\n");
    }   
    
    if (n == 5)
    {
        printf("    #  #\n");
        printf("   ##  ##\n");
        printf("  ###  ###\n");
        printf(" ####  ####\n");
        printf("#####  #####\n");
    }   
    
    if (n == 6)
    {
        printf("     #  #\n");
        printf("    ##  ##\n");
        printf("   ###  ###\n");
        printf("  ####  ####\n");
        printf(" #####  #####\n");
        printf("######  ######\n");
    }   
    
    if (n == 7)
    {
        printf("      #  #\n");
        printf("     ##  ##\n");
        printf("    ###  ###\n");
        printf("   ####  ####\n");
        printf("  #####  #####\n");
        printf(" ######  ######\n");
        printf("#######  #######\n");
    }   
    
    if (n == 8)
    {
        printf("       #  #\n");
        printf("      ##  ##\n");
        printf("     ###  ###\n");
        printf("    ####  ####\n");
        printf("   #####  #####\n");
        printf("  ######  ######\n");
        printf(" #######  #######\n");
        printf("########  ########\n");
    }   
    
}

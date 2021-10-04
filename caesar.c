#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main(int argc, string argv[])

{ 
    if (argc == 2)        
    {  
        // Checking if the key is a number
        for (int j = 0, n = strlen(argv[1]); j < n; j++)
        {
            if (isdigit(argv[1][j])) 
            {
                
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            } 
        }
           
        int k = atoi(argv[1]);
        // Prompt user for a secret message
        string s = get_string("Plaintext: ");
        printf("Ciphertext: ");
        for (int i = 0, n = strlen(s); i < n; i++)
            // Coding the secret message using the key
        { 
            if (islower(s[i]))
            {
                char c = ((s[i] - 'a' + k) % 26 + 'a');
                printf("%c", c);
            }
                
            else if (isupper(s[i]))
            {
                char c = ((s[i]  - 'A' + k) % 26 + 'A');
                printf("%c", c);
            }   
            else 
            {
                printf("%c", s[i]);
            }
        }  
        printf("\n");
    }
        
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    } 
}


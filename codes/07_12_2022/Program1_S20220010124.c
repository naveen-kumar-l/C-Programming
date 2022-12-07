// © NAVEEN KUMAR
#include <stdio.h>
#include <ctype.h> // header file containing tolower function

void main(){
    char alphabet; // declaring the type as character 
    
    // asking user to enter an alphabet
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);

    // converting the alphabet to lower this helps us not to inclue capital letters in if statment
    alphabet = tolower(alphabet);
    
    // dont worry about the curly braces as we are using only one line inside the if block or else if block
    // NOTE: you must use curly braces when you are writing multipe line if else blocks 
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u') // checking whether the entered character is in vowels or not 
        printf("You entered '%c' which is a vowel\n\n", alphabet);
    else if (alphabet >= 'a' && alphabet <= 'z') // when about statment fails then print it as consonant
        printf("You entered '%c' which is a consonant.\n\n", alphabet);
    else // when all statements are failed then printing that it is not an alphabet
        printf("You entered '%c' which is not an alphabet.\n\n", alphabet);
}
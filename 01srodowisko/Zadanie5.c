//
//  Zadanie5.c
//
//  Komentarze od tego momentu będą po angielsku
//
//  Created by Cezary Regec on 10.10.2017.
//
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int     containsAny         (char*, char*);
char*   removeRepetitions   (char*);
void    printCombinations   (char*, char*, int);


//
//  main ()
//
int main () {
    int     letters_len = 0;
    int     repetition  = 0;
    
    char*   letters     = malloc(255);
    char*   response    = malloc(2);
    
    // init letters
    printf("Podaj litery do kombinacji (max 255): ");
    scanf("%s", letters);
    
    // ask for repetition
    while (!containsAny("tnTN", response)) {
        printf("Czy kombinacja ma być bez powtórzeń? (T/N) ");
        scanf("%1s", response);
    }
    
    // remove repetitions from input string if we don't want those
    if (!(repetition = !containsAny("tT", response))) {
        letters = removeRepetitions(letters);
    }
    
    // do it
    printCombinations(letters, "", repetition);
}


//
//  containsAny (char* set, char* string)
//
//  returns 1 if string contains any of the chars in set
//
int containsAny (char* set, char* string) {
    
    for (int i = 0; i < strlen(set); i++) {
        
        // if string contains the letter
        if (strrchr(string, set[i]) != NULL) {
            return 1;
        }
    }
    
    return 0;
}


//
//  removeRepetitions (char* string)
//
//  removes repetitive characters from string
//
char* removeRepetitions(char* string) {
    
    // init our result string
    char*   new_string;
    new_string = malloc(strlen(string) + 1);
    
    // for every char in string
    for (int i = 0; i < strlen(string); i++) {
        
        // init this char as string
        char    letter[2];
        letter[0] = string[i];
        letter[1] = '\0';
        
        // if it hasn't occured in result, add
        // so if it isn't a repetition, doesn't ignore
        if (!containsAny(letter, new_string)) {
            strcat(new_string, letter);
        }
    }
    
    return new_string;
}


//
//  printCombinations (char* letters, char* prefix, int repetition)
//
//  Prints combinations of letters in letters array
//  with or without repetition
//
void printCombinations (char* letters, char* prefix, int repetition) {
    
    int letters_len = strlen(letters);
    int current_pos = strlen(prefix) + 1;
    
    for (int i = 0; i < letters_len; i++) {
        
        // init strings
        char*   new_prefix;
        char    next_letter[2];
        
        new_prefix      = malloc(current_pos + 1);
        
        // char to string
        next_letter[0]  = letters[i];
        next_letter[1]  = '\0';
        
        // copy prefix and append
        strcpy(new_prefix, prefix);
        strcat(new_prefix, next_letter);
        
        // if this is a combination without repetitions
        // and if the letter is repeating
        if (!repetition && containsAny(next_letter, prefix)) {
            continue;
        }
        
        // if we are done
        if (current_pos >= letters_len) {
            printf("%s\n", new_prefix);
            
        } else {  // or maybe not
            printCombinations(letters, new_prefix, repetition);
        }
        
    }
}

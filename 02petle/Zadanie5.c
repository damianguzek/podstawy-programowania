//
//  Zadanie5.c
//  
//
//  Created by Cezary Regec on 11.10.2017.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAX_INPUT = 255;
const int MAX_STACK = 64;

float   stack[MAX_STACK];
int     current_place;
char*   history;


void    clr         ();
void    menu        ();
void    calc        (char*);
void    push        (float);
float   pop         ();
void    addHistory  (char*);


//
//  main ()
//
int main () {
    printf("============ RPN CALCULATOR ============\n");
    printf("Używaj liczb lub poniższych operatorów:\n");
    printf("             +, -, *, /, =\n       (c)lear memory, (q)uit\n");
    
    // init
    clr();
    
    // continuous input
    while (1) {
        menu();
    }
}


//
//  clr ()
//  clear calculator memory
//
void clr () {
    current_place   = 0;
    stack[0]        = 0.0f;
    history         = malloc(MAX_INPUT * (MAX_STACK + 1));
}


//
//  menu ()
//  get menu input
//
void menu () {
    char*   input;
    input = malloc(MAX_INPUT);
    
    printf(">%s\n", history);
    scanf("%s", input);
    
    calc(input);
}


//
//  calc (char* input)
//  push to stack input or do input operation
//
void calc (char* input) {
    
    // define vars for popping
    float first;
    float second;
    
    // do input action
    switch (input[0]) {
        case '+':
            push(pop() + pop());
            break;
            
        case '-':
            first   = pop();
            second  = pop();
            
            push(second - first);
            break;
            
        case '*':
            push(pop() * pop());
            break;
            
        case '/':
            first   = pop();
            second  = pop();
            
            push(second / first);
            break;
        
        // pop and push back then show results
        case '=':
            first   = pop();
            push(first);
            
            printf(">%s = %f\n", history, first);
            break;
            
        // clear
        case 'c':
            clr();
            break;
        
        // quit
        case 'q':
            exit(0);
            break;
            
        // push number to stack
        default:
            push(atof(input));
            break;
            
    }
    
    // add to history
    addHistory(input);
}


//
//  push (float number)
//  push to stack
//
void push (float number) {
    
    // check if we are not messing with memory
    if (current_place >= MAX_STACK) {
        printf("Błąd - przekroczono maksymalną ilość zmiennych\n");
        return;
    }
    
    // push to stack
    stack[current_place++] = number;
}


//
//  pop ()
//  pop from stack
//
float pop () {
    // if we are in bounds, pop stack
    return current_place == 0 ? 0 : stack[--current_place];
}


//
//  addHistory (char* input)
//  adds input to history
//
void addHistory (char* input) {
    
    // ignore clr and =
    if (input[0] != 'c' && input[0] != '=') {
        strcat(history, " ");
        strcat(history, input);
    }
}
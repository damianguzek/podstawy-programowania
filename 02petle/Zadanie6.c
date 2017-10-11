//
//  Zadanie6.c
//  
//
//  Created by Cezary Regec on 12.10.2017.
//
//

#include <stdio.h>
#include <stdlib.h>

const int CHAR_ZERO = 48;

int     max         = 0;
int     cell_width  = 0;

char*   format  (int);

//
//  main()
//
int main () {
    // get multiplication table max range
    printf("Podaj maksymalny zakres tabliczki mnożenia: ");
    scanf("%d", &max);

    // calculate maximum cell width
    for (int tmp = max; tmp > 0; tmp /= 10) {
        cell_width++;
    }
    
    // display the table
    for (int i = 1; i <= max; i++) {
        for (int j = 1; j <= max; j++) {
            printf("%s ", format(i*j));
        }
        
        printf("\n");
    }
}


//
//  format (int n)
//  format cells
//
char* format (int n) {
    
    // init
    char*   result;
    int     tmp = n;
    
    // init string
    result = malloc(cell_width + 1);
    result[cell_width] = '\0';
    
    // fill every char in string
    for (int i = cell_width - 1; i >= 0; i--) {
        
        result[i] = ' ';
        
        // if this is a char of a number
        if (tmp > 0) {
            // add a digit
            result[i] = (char) ((tmp % 10) + CHAR_ZERO);
            tmp /= 10;
        }
    }
    
    return result;
}
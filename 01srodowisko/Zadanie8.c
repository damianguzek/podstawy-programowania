//
//  Zadanie8.c
//  
//
//  Created by Cezary Regec on 11.10.2017.
//
//

#include <stdio.h>

int main () {
    
    // int vars
    float   volume          = 1.0f;
    
    int     sides_length    = 3;
    float   sides[sides_length];
    
    // get all sides
    for (int i = 0; i < sides_length; i++) {
        
        printf("Podaj długość krawędzi %d: ", (i+1));
        scanf("%f", &sides[i]);
        
        // calculate V = a*b*c
        volume *= sides[i];
    }
    
    printf("Objętość wynosi: %f\n", volume);
}
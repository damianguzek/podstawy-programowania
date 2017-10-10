//
//  Zadanie7.c
//  
//
//  Created by Cezary Regec on 11.10.2017.
//
//

#include <stdio.h>

int main () {
    
    // init vars
    int     n               = 3;
    float   inverse_sum     = 0.0f;
    float   harmonic_avg    = 0.0f;
    
    //printf("Podaj ilość liczb: ");
    //scanf("%d", &n);
    
    // get all numbers and the sum of inverses
    for (int i = 0; i < n; i++) {
        float number;
        
        printf("Podaj liczbę nr %d: ", (i+1));
        scanf("%f", &number);
        
        inverse_sum += (1.0f / number);
    }
    
    // calculate avg
    harmonic_avg = 1.0f * n / inverse_sum;
    
    printf("Średnia harmoniczna wynosi: %f\n", harmonic_avg);
}
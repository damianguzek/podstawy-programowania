//
//  Zadanie8.c
//  
//
//  Created by Cezary Regec on 12.10.2017.
//
//

#include <stdio.h>

//
//  main ()
//
int main () {
    float   linear[2];
    int     quarters[4];
    
    // Get params
    printf("Podaj współczynniki y = ax + b\n");
    
    printf("a: ");
    scanf("%f", &linear[0]);
    
    printf("b: ");
    scanf("%f", &linear[1]);
    
    //
    // Quarters classification
    //
    
    // a > 0  =>  I, III
    if (linear[0] > 0) {
        quarters[0] = 1;
        quarters[2] = 1;
    }
    
    // a < 0  =>  II, IV
    if (linear[0] < 0) {
        quarters[1] = 1;
        quarters[3] = 1;
    }
    
    // b > 0  =>  I, IV
    if (linear[1] > 0) {
        quarters[0] = 1;
        quarters[3] = 1;
    }
    
    // b < 0  =>  II, III
    if (linear[1] < 0) {
        quarters[1] = 1;
        quarters[2] = 1;
    }

    // Print result
    
    printf("Funkcja należy do ćwiartek: ");
    
    for (int i  = 0; i < 4; i++) {
        if (quarters[i] == 1) {
            printf("%d, ", (i+1));
        }
    }
    
    printf("\n");

}

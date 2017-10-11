//
//  Zadanie1.c
//  Gets three numbers from input and displays max
//
//  Created by Cezary Regec on 11.10.2017.
//
//

#include <stdio.h>

int max;

int main () {
    
    // get those numbers
    for (int i = 0; i < 3; i++) {
        int n;
        
        printf("Podaj liczbę nr %d: ", (i+1));
        scanf("%d", &n);
        
        // is this our new max?
        if (n > max) {
            max = n;
        }
    }
    
    // print max
    printf("Maksimum: %d\n", max);
}
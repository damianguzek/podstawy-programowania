//
//  Zadanie4.c
//  
//
//  Created by Cezary Regec on 10.10.2017.
//
//

#include <stdio.h>

int main () {
    float   params[3];
    
    printf("y = ax + b\n\n");

    printf("Podaj a: ");
    scanf("%f", &params[0]);
    
    printf("Podaj x: ");
    scanf("%f", &params[1]);
    
    printf("Podaj b: ");
    scanf("%f", &params[2]);
    
    
    printf("\nWynik to:\ny = %.2f\n",
           (params[0] * params[1] + params[2]));
}
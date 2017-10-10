//
//  Zadanie6.c
//  
//
//  Created by Cezary Regec on 11.10.2017.
//
//

#include <stdio.h>

int main () {
    
    // define vars
    float   base;
    float   height;
    float   area;
    
    printf("Podaj podstawę trójkąta: ");
    scanf("%f", &base);
    
    printf("Podaj wysokość trójkąta: ");
    scanf("%f", &height);
    
    // A = 1/2 * b * h
    area = base * height / 2.0f;
    
    printf("Pole trójkąta wynosi: %f\n", area);
}
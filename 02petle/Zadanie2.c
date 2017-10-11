//
//  Zadanie2.c
//
//  Created by Cezary Regec on 11.10.2017.
//
//

#include <stdio.h>
#include <math.h>

const char  letter_a    = 97;

int main () {
    
    float   params[3];
    float   delta;
    float   zeroes[2];
    
    // get params
    printf("Podaj parametry dla ax^2 + bx + c = 0\n");
    
    for (int i = 0; i < 3; i++) {
        
        printf("Podaj parametr %c: ", (char) (letter_a + i));
        scanf("%f", &params[i]);
    }
    
    // delta = b^2 - 4ac
    delta = pow(params[1], 2) - 4.0f * params[0] * params[2];
    
    if (delta < 0) {
        printf("Brak rozwiązań w zbiorze liczb rzeczywistych.\n");
        return 0;
    }

    // x_0 = (-b - sqrt(delta)) / 2a
    zeroes[0] = (-params[1] - sqrt(delta)) / 2 * params[0];
    
    // x_1 = (-b + sqrt(delta)) / 2a
    zeroes[1] = (-params[1] + sqrt(delta)) / 2 * params[0];
    
    printf("Miejsca zerowe:\n%f\n%f\n", zeroes[0], zeroes[1]);
}
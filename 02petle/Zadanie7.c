//
//  Zadanie7.c
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

    // get the number
    int n = 0;
    
    printf("Podaj liczbę całkowitą: ");
    scanf("%d", &n);
    
    // seek all divisors of n
    printf("Dzielniki tej liczby to: ");
    
    for (int i = 1; i <= n; i++) {
        // if no remainder from n / i, i is a divisor
        if (!(n%i)) {
            printf("%d, ", i);
        }
    }
    
    printf("\n");
}
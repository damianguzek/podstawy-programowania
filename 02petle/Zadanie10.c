//
//  Zadanie10.c
//  
//
//  Created by Cezary Regec on 12.10.2017.
//
//

//
//
//  UWAGA! Program będzie niezatrzymywalny,
//  tzn. będzie można go wyłączyć jedynie przez ^c
//
//


#include <stdio.h>

unsigned long int getNextPrime (unsigned long int);

//
//  main ()
//
int main () {
    for (unsigned long int prime = 2; 1; prime = getNextPrime(prime)) {
        printf("%li\n", prime);
    }
}


//
//  getNextPrime (unsigned long int n)
//  seeks for next prime after given
//
unsigned long int getNextPrime (unsigned long int n) {
    
    for (unsigned long int i = n + 1; 1; i++) {
        
        int isPrime = 1;
        
        for (unsigned long int j = 2; j < i*i; j++) {
            
            if (!(i%j) && i != j) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime == 1) {
            return i;
        }
    }
}
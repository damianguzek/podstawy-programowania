//
//  Zadanie12.c
//  
//
//  Created by Cezary Regec on 12.10.2017.
//
//

#include <stdio.h>
#include <stdlib.h>

//
// dynamically allocated int array
//
typedef struct {
    int*    items;
    int     length;
} array_i;

int         isPrime             (int);
array_i     getProperDivisors   (int);
int         getArraySum         (array_i);
int         isDuffy             (int);

//
//  main ()
//
int main () {
    int n = 0;
    
    while (n <= 3) {
        printf("Podaj n: ");
        scanf("%d", &n);
    }
    
    
    printf("Liczby Duffy'ego z zakresu (3, %d): ", n);
    for (int i = 4; i <= n; i++) {
        if (isDuffy(i)) {
            printf("%d, ", i);
        }
    }
    
    printf("\n");
}

//
//  isPrime (int n)
//  checks if a number is prime
//
int isPrime (int n) {

    for (int i = 2; i*i <= n; i++) {
        // if there is no remainder, it's not a prime
        if (!(n%i)) {
            return 0;
        }
    }
    
    return 1;
}

//
//  getProperDivisors (int n)
//  returns an array_i of n's divisors
//
array_i getProperDivisors (int n) {
    
    // init array
    array_i divisors = { .items = malloc(255), .length = 0 };
    
    for (int i = 2; i < n; i++) {
        // if no remainders, then it is a divisor
        if((n % i) == 0) {
            divisors.items[divisors.length++] = i;
        }
    }
    
    return divisors;
}

//
//  getArraySum (array_i array)
//  returns a sum of array_i elements
//
int getArraySum (array_i array) {
    int sum = 0;
    
    // add each element
    for (int i = 0; i < array.length; i++) {
        sum += array.items[i];
    }
    
    return sum;
}

//
//  isDuffy (int n)
//  checks if an n is a Duffy number
//
int isDuffy (int n) {
    
    array_i divisors    = getProperDivisors(n);
    int     div_sum     = getArraySum(divisors) + 1;
    
    
    for (int i = 0; i < divisors.length; i++) {
        // if sum is divisible by any of divisors, it is not a Duffy number
        if (!(div_sum % divisors.items[i])) {
            return 0;
        }
    }

    return 1 && !isPrime(n);
}
//
//  Zadanie11.c
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


array_i     getDivisors (int);
array_i     getCommon   (array_i, array_i);
int         getMax      (array_i);


//
//  main()
//
int main () {

    int n1, n2;
    
    printf("Podaj całkowitą liczbę 1: ");
    scanf("%d", &n1);
    
    printf("Podaj całkowitą liczbę 2: ");
    scanf("%d", &n2);
    
    array_i divisors = getCommon(getDivisors(n1), getDivisors(n2));
    
    printf("NWD: %d\n", getMax(divisors));
    
}


//
//  getDivisors (int n)
//  returns an array_i of n's divisors
//
array_i getDivisors (int n) {
    
    // init array
    array_i divisors = { .items = malloc(255), .length = 0 };
    
    for (int i = 1; i <= n; i++) {
        // if no remainders, then it is a divisor
        if((n % i) == 0) {
            divisors.items[divisors.length++] = i;
        }
    }
    
    return divisors;
}


//
//  getCommon (array_i a1, array_i a2)
//  returns an array of common items from both arrays
//
array_i getCommon (array_i a1, array_i a2) {
    
    //init array
    array_i   common =  { .items = malloc(255), .length = 0 };
    
    // go thorugh a1
    for (int i = 0; i < a1.length; i++) {
        // check for a2
        for (int j = 0; j < a2.length; j++) {
            // if common, add to result
            if (a1.items[i] == a2.items[j]) {
                common.items[common.length++] = a1.items[i];
            }
        }
    }
    
    return common;
}


//
//  getMax (array_i array)
//  get max from array
//
int getMax (array_i array) {
    int max = array.items[0];
    
    // seek for max
    for (int i = 0; i < array.length; i++) {
        if (array.items[i] > max) {
            max = array.items[i];
        }
    }
    
    return max;
}
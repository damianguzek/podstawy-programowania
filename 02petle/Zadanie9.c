//
//  Zadanie9.c
//  
//
//  Created by Cezary Regec on 12.10.2017.
//
//

#include <stdio.h>

void    printSet    (int, int);
//
//  main ()
//
int main () {
    
    int a1, a2;
    int b1, b2;
    int n;
    
    while (n <= 0) {
        printf("Podaj n: ");
        scanf("%d", &n);
    }
    
    while (a1 > a2 || a1 <= 0 || a2 <= 0 || a1 >= n || a2 >= n) {
        printf("Podaj a1: ");
        scanf("%d", &a1);
        
        printf("Podaj a2: ");
        scanf("%d", &a2);
    }
    
    while (b1 > b2 || b1 <= 0 || b2 <= 0 || b1 >= n || b2 >= n) {
        printf("Podaj b1: ");
        scanf("%d", &b1);
        
        printf("Podaj b2: ");
        scanf("%d", &b2);
    }
    
    printf("Zbiór a: ");
    printSet(a1, a2);
    
    printf("Zbiór b: ");
    printSet(b1, b2);
}

//
//  printSet (int a, int b)
//  prints ints from set
//
void printSet (int a, int b) {
    for (int i = a; i <= b; i++) {
        printf("%d, ", i);
    }
    
    printf("\n");
}
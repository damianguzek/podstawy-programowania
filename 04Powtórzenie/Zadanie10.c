#include <stdio.h>
#include <stdlib.h>

int funkcja(int n){
	int suma=n,k,i;
	for(i=1;i<3;i++){
		k=n-i;
		suma+=k;
	}
	return suma;
}


int main() {
	printf("%d", funkcja());
	return 0;
}

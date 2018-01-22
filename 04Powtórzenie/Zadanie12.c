#include <stdio.h>
#include <stdlib.h>



int funkcja(a,b){
	return(abs(a)+abs(b))/2;
}


int main() {
	printf("%d",funkcja(10,-20));
	return 0;
}

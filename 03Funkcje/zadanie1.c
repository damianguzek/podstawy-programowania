#include <stdio.h>
#include <stdlib.h>


float funkcja(float a, float h){
	return 0.5*a*h;
}



int main() {
	printf("%f", funkcja(1.5,2.5));
	return 0;
}

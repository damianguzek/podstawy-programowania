#include <stdio.h>
#include <stdlib.h>

float funkcja(int n){
	return floor(pow(n,1.0/3.0));
}
int main(int argc, char *argv[]) {
	printf("%f", funkcja(1001));
	return 0;
}

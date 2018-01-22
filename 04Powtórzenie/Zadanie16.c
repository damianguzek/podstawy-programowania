#include <stdio.h>


float funkcja(int x, int y){
	float c;
	c=sqrt(pow(x,2)+pow(y,2));
	return x/c;
}


int main() {
	printf("%f", funkcja(7,7));
	return 0;
}

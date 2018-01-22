#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool funkcja(float a, float b, float c){
	if(pow(a,2)==pow(b,2)+pow(a,c)) return 1;
	else if(pow(b,2)==pow(a,2)+pow(a,c)) return 1;
	else if(pow(c,2)==pow(b,2)+pow(a,a)) return 1;
	else return 0;
}



int main() {
	printf(funkcja(10,8,6)? "nie":"tak");
	return 0;
}

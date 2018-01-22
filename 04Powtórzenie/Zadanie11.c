#include <stdio.h>
#include <stdlib.h>

void funkcja(float cena, float pp, float pk){
	int i, p;
	for(i=1;;i++){
		cena=cena+(cena*pp)*1.0;
		if(cena>pk){
			printf("Warning: %d", i);
			break;
		}
	}
}



int main() {
	funkcja(100,0.10,200);
	return 0;
}

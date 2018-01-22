#include <stdio.h>
#include <stdlib.h>


int potega(int p, int ptg){
	int i, wynik=1;
	for(i=0;i<ptg;i++){
		wynik*=p;
	}
return wynik;
}


int main() {
	printf("%d", potega(4,9));
	return 0;
}

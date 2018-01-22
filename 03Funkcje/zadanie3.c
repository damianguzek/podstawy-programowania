#include <stdio.h>
#include <stdlib.h>

int kwadraty(int liczba){
	int suma=0, i;
	for(i=1;i<=liczba;i++){
		if(liczba%i==0)
			suma++;
	}
	return suma;
}





int main() {
	int suma =kwadraty(120);
	printf("%d", suma);
	return 0;
}

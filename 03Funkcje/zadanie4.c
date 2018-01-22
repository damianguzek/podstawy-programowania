#include <stdio.h>
#include <stdlib.h>
void kwadraty(int liczba){
	int i;
	for(i=1;i<liczba;i++)
	printf("%d\n", i*i);	
}
int main() {
	kwadraty(7);
	return 0;
}

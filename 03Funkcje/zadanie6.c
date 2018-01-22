#include <stdio.h>
#include <stdlib.h>


int funkcja(int a){

	if(a==1)
		return 2;
	else 
		return funkcja(a-1)*2;
}



int main() {
	printf("%d",funkcja(8));
	return 0;
}

#include <stdio.h>

int funkcja(int n){
	if(n<=0||n==10)
		return 0;
	else
	return 2*funkcja(n-1)+funkcja(n-2) + 5;
}



int main() {
	printf("%d",funkcja(5));
	return 0;
}




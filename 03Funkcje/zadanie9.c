#include <stdio.h>



int funkcja(int n){
	if(n==0) 
		return 1;
	else if(n%2!=0)
		return n*n;
	else if(n%2==0)
		return n*n-5;
}
int main() {
	printf("%d", funkcja(10));
	return 0;
}

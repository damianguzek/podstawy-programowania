#include <stdio.h>

int max(int a, int b){
	if(a>b) return a;
	else return b;
}
int min(int max, int a, int b){
	return a+b-max;
}
int main() {
	int maks=max(9,2);
	printf("%d", min(maks,9,2));
	return 0;
}

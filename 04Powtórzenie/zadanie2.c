#include <stdio.h>

int funkcja(int x, int y){
	if(y==0)
		return x;
	else if(x==0)
		return y;
	else
		return funkcja(x-1,y)+funkcja(x,y-1);
}


int main() {
	printf("%d", funkcja(2,3));
	return 0;
}


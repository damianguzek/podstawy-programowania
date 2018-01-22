#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int funkcja(int x,int y){
	if (x==y )return x;
	else if(x>y) return 2*funkjca(floor(x/y),y);
	else if(y>x) return 2*funkjca(x,floor(y/x));
}


int main() {
	printf("%d",funkcja(2,2));
	return 0;
}

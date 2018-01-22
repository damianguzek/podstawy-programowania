#include <stdio.h>

int funkcja(int x1,int y1,int x2,int y2){
	return abs(x1-x2)*abs(y1-y2);
}
int main() 
{
	printf("%d",funkcja(1,1,3,3));
	return 0;
}

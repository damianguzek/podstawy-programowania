#include <stdio.h>
#include <stdlib.h>

int silnia(int a){
	if(a==1 || a==0)
		return 1;
	else return 
		silnia(a-1)*a;
}




int main() {
	printf("%d", silnia(9));
	return 0;
}

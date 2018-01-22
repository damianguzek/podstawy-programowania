#include <stdio.h>
#include <stdlib.h>

int dzielniki(){
	int a, i;
	scanf("%d", &a);
	printf("\n");
	for(i=1;i<=a;i++){
		if(a%i==0)
			printf("%d\n", i);
		else continue;
	}
	
}






int main() {
	dzielniki();
	return 0;
}

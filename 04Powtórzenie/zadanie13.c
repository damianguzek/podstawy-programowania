#include <stdio.h>
#include <stdlib.h>




int main() {
	int i, suma=0, k;
	for(i=1;;i++){
		scanf("%d", &k);
		suma+=k;
		if(suma>100){
			printf("\n---->%d", suma);
			break;
		}
	}
	
	
	return 0;
}

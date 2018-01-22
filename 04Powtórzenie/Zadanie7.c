#include <stdio.h>
#include <stdlib.h>

void f(unsigned int m,unsigned int n){
	int i;
	for(i=1;i<n;i++){
		if(i%m==0){
			printf("%d\n", i);
		}
	}
}



int main() {
	
	f(2,101);
	
	return 0;
}

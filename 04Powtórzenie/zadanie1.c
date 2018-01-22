#include <stdio.h>
#include <stdlib.h>

int funkcja(int liczba){
	int i;
	for(i=1;i<=liczba;i++){
		if(i*i>liczba){
			break;
		}
	}
	return (i-1);
}
int main() {	
	printf("%d", funkcja(26));
return 0;
}

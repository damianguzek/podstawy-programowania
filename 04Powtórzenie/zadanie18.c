#include <stdio.h>
#include <stdlib.h>

int funkcja(a){
	int i, p=a, l=1,b,w,suma=0; 
		for(i=1;;i++){
			if(p/10!=0){
			p=p/10;
			l++;
			}
			else break;
		}
		p=a;
	for(i=0;i<l;i++){
		b=p/10;
		w=p-(b*10);
		suma+=w*pow(2,i);
		p=p/10;
	}
	return suma;
}
int main() {
	
	printf("%d", funkcja(11111111));
	
	
	return 0;
}

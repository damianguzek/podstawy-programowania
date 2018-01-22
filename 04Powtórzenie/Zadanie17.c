#include <stdio.h>
#include <stdlib.h>

int funkcja(a){
	int suma=0,x,i,k,d,p=a,l=1;
		for(i=1;;i++){
			if(p/10!=0){
				p=p/10;
				l++;
			}
			else break;
		}
	
		for(i=0;i<=l;i++){
		k=a/10;
		x=10*k;
		d=a-x;
			if(d%3==0 && d!=0){
				suma++;
				a=k;
			}
			else 
				a=k;
	}
return suma;
}

int main(){
	printf("%d",funkcja(330331));
}

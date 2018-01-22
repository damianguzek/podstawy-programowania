#include <stdio.h>
#include <stdlib.h>

float dl_odc(float x1,float y1,float x2, float y2){
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
int main() {
	printf("%f", dl_odc(1,1,2,1));
	return 0;
}								

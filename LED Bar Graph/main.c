#include <reg51.h>

#define MAX 8

void delay(int n) {
	int i, j;

	for(i=0; i<n; i++)    
	for(j=0; j<1275; j++);
}

void main() {
	int value[MAX] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
	
	int i;
	
	while(1) {
		for(i=0; i<MAX; i++) {
			P2 = value[i];
			delay(100);
		}
	}
}
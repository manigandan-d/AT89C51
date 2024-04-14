#include <reg51.h>

#define MAX 8

void main() {
	P0 = 1;
	P2 = 0;
	
	while(1) {
		if(P0 == 1) {
			while(P0 == 1);
			P2 ^= 1;
		}
	}
}
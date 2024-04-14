#include <reg51.h>

#define MAX 10

void msdelay(int time) {
    int i, j;

    for(i=0; i<time; i++)    
    for(j=0; j<1275; j++);
}


void main() {
    int value[MAX] = {0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90};

    int k;

    while(1) {
        for(k=0; k<MAX; k++) {
         P2 = value[k]; 
         msdelay(100);
        }
    }
}
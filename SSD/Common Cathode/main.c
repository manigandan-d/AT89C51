#include <reg51.h>

#define MAX 10

void msdelay(int time) {
    int i, j;

    for(i=0; i<time; i++)    
    for(j=0; j<1275; j++);
}


void main() {
    int value[MAX] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};

    int k;

    while(1) {
        for(k=0; k<MAX; k++) {
         P2 = value[k]; 
         msdelay(100);
        }
    }
}
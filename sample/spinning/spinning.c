#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int milliseconds) {
    // Storing start time 
    clock_t start_time = clock(); 
    // looping till required time is not achieved 
    while (clock() < start_time + milliseconds); 
}

int main() {
    time_t t;
    int r;
    srand((unsigned) time(&t));
    r = rand()%36+1;
    while (r != 35) {
        r = rand()%36+1;
        printf("\rSpinning: %2d", r);
        delay(200);
    }
}
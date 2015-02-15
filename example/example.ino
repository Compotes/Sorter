#include <sorter.h>

void setup() {
    Serial.begin(9600);
}

int c = 0;
void loop() {
    if (c == 0) {
        int a[12][2];
        for (int i = 0; i < 12; i++) {
            a[i][0] = random(100);
            a[i][1] = i;
        }
  
        //sorter::sort_max(a); // Set two first indexes in array to max values
        sorter::sort_min(a); // Set two first indexes in array to min values
        //sorter::swap(); // Swaps two numbers 
        
        for (int i = 0; i < 12; i++) {
            Serial.print(a[i][1]);
            Serial.print(' ');
            Serial.println(a[i][0]);
        }
        c += 1;
    }
}




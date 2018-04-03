/* Print corresponding celsius to Fahrenheit */

#include <stdio.h>

int main(){
    float cel, fahr;
    int low, high, step;

    low = 0; /* Lower limit of temperature table. */
    high = 300; /* Higher limit of temperature table. */
    step = 20; /* Difference between two Celsius values in table.*/
    printf("%3s %6s\n", "C", "F"); /* Display table title */
    
    while(cel <= high){
        fahr = cel * 1.8 + 32;
        printf("%2.2f %6.2f\n", cel, fahr);
        cel += step;
    }
    
    return 0;
}

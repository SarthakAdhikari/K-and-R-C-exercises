/* Print celsius fahrenheit table in reverse */

#include<stdio.h>

int main(){
    float cel, fahr;
    printf("%3s %6s\n", "C", "F"); /* Display table title */
    
    for(cel = 300; cel >= 0; cel -= 20){
        fahr = cel * 1.8 + 32;
        printf("%2.2f %6.2f\n", cel, fahr);
    }
       
}

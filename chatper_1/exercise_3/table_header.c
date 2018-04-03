/* Modify the temperature conversion program to print a heading above table */

#include<stdio.h>

int main(){
   
   float fahr, celsius;
   int lower, upper, step;

   lower = 0; /* Lower limit of table. */
   upper = 300; /* Upper limit of table. */
   step = 20;
   fahr = lower;
   printf("%3s %6s\n", "F", "C"); /* Heading. */
   
   while(fahr <= upper){
       celsius = (5.0/9.0) * (fahr-32.0);
       printf("%3.0f %6.1f\n", fahr, celsius);
       fahr += step;
   }

   return 0; 
}

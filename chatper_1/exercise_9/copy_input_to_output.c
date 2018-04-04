/* Copies input to output replacing each blank with single blank*/

#include<stdio.h>
#define WHITESPACE 32

int main(){
   int get_char_value, blank_counter;
   
   blank_counter = 0;

   while((get_char_value = getchar()) != EOF){
       if(get_char_value == WHITESPACE){
           ++blank_counter;
       }
       else{
          if(blank_counter > 0){
              putchar(WHITESPACE);
              blank_counter = 0;
          }
          putchar(get_char_value);
      }
   }

  return 0;
}

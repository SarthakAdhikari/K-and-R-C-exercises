/* Replace tab by \t, backspace by \b, and backslash by \\ on input*/

#include<stdio.h>
#define TAB 9
#define BACKSPACE 8
#define BACKSLASH 92

int main(){

   int get_char_value, condition_counter;

   while((get_char_value = getchar()) != EOF){
       condition_counter = 0;
       if(get_char_value == TAB){
           putchar('\\');
           putchar('t');
           condition_counter = 1;
       }
       if(get_char_value == BACKSPACE){
           putchar('\\');
           putchar('b');
           condition_counter = 1;
       } 
       if(get_char_value == BACKSLASH){
           putchar('\\');
           putchar('\\');
           condition_counter = 1;
       }
       if(condition_counter != 1){
           putchar(get_char_value);
       }
   }

  return 0;
}

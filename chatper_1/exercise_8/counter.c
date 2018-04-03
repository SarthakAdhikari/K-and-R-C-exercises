/* Count blanks, tabs and newlines */

#include <stdio.h>

int main(){
   int char_value_holder;
   int tab_counter = 0, blank_counter = 0, new_line_counter = 0;
    
   while((char_value_holder = getchar()) != EOF){
       if(char_value_holder == '\t') ++tab_counter;
       if(char_value_holder == ' ') ++blank_counter;
       if(char_value_holder == '\n') ++new_line_counter;
   }   

   printf("Tab count: %d\n", tab_counter);
   printf("Blank count: %d\n", blank_counter);
   printf("New Line count: %d\n", new_line_counter);
   
  return 0;
}

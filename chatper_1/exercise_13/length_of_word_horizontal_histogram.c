/* Draws horizontal histogram according to the length of input word. */

#include<stdio.h>
#define WHITESPACE 32
#define NEW_LINE 10
#define IN 0
#define OUT 1

int main(){
    int get_char_value, blank_counter, state, single_word_length, index,
        longest, previous,
        length_of_words[20] = {0}; /*initialize array with all 0's */

    longest = 0;
    blank_counter = 0;
    index = 0;

    /* count words and store the word counts in an array */
    while((get_char_value = getchar()) != EOF){

        if(get_char_value == WHITESPACE){
            if( state == IN){
                ++index;
            }
            state = OUT;
            single_word_length = 0;
            ++blank_counter;
        } else {
            blank_counter = 0;

            if(state == OUT){
                putchar(WHITESPACE);
                state = IN;
            }

            if(get_char_value != NEW_LINE){
                length_of_words[index] = ++single_word_length;
            } else {
                index = 0;
            }
        }
    } 

    /* find the largest number in an array */
    for(int j = 0; j < 20; j++){
        previous = length_of_words[j];
        if(previous > longest ){
            longest = previous;
        } 
        printf("\n%d\n", length_of_words[j]);
    }
    printf("Longest string length is: %d", longest);

    while(longest >= 0){
        for(int l = 0; l < 20; l++){
            if(length_of_words[l] - longest > 0){
                printf("| ");
            } else{
                printf("  "); 
            } 
        } 
        putchar('\n'); 
        --longest;
    }

}

/* Verify getchar() != EOF is 0 or 1 */

#include<stdio.h>

int main(){
    int c;
    int got_char = getchar();
    c = got_char != EOF;
    printf("getchar() value = %d\n", got_char);
    printf("getchar() != EOF returned: %d\n", c);
}

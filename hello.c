#include <stdio.h>
#include "cs50.h" // WHATTTTTT

/*
See: https://github.com/cs50/libcs50/issues/189#issuecomment-737173845

alternatively...
gcc -o file file.c cs50.c
*/

int main (void) 
{
    string first = get_string("What's your first name? ");
    string last = get_string("What's your last name? ");
    printf("hello, %s %s\n", first, last);
}
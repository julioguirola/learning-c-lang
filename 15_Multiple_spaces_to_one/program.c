// Write a program to copy its input to its output,
// replacing each string of one or more blanks by a single blank.

#include <stdio.h>
int main() {
    int c;
  	int cant = 0;
    while ((c = getchar()) != EOF) {
      	if (c == ' ') {
        	if (cant == 0) putchar(c);
        	cant++;
        } else {
          	cant = 0;
        	putchar(c);
        }
    }
}

// This will be provided as input to your program:

// But soft  what light     through yonder window breaks
// It is    the east and  Juliet is the sun
// Arise fair sun   and kill the envious moon
// Who  is  already  sick  and  pale  with  grief

// Expected output from your program:

// But soft what light through yonder window breaks
// It is the east and Juliet is the sun
// Arise fair sun and kill the envious moon
// Who is already sick and pale with grief

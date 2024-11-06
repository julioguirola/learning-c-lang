// Write a program which prints the words in its input,
// one per line. A word is any string separated by a space or newline.

#include <stdio.h>
int main() {
    int c;
    while ((c = getchar()) != EOF) {
      	if (c == ' ') {
          printf("\n");
          continue;}
        putchar(c);
    }
}

// This will be provided as input to your program:

// But soft what light
// through yonder window
// breaks

// Expected output from your program:

// But
// soft
// what
// light
// through
// yonder
// window
// breaks

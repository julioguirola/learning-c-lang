// Write a C function called py_lstrip() that removes whitespace
// (blanks, tabs, and newlines) from the beginning of a string. This function
// modifies its parameter and should never be called with a constant value.

void py_lstrip(inp)
    char inp[];
{
    int start = 0;

  	while (inp[start] == ' ') {
      start++;
    }

  	int i = 0;
  	while (inp[i]) {
      inp[i] = inp[start];
      i++;
      start++;
    }
}

#include <stdio.h>

int main() {
    char s1[] = "   Hello   World    ";
    void py_lstrip();
    py_lstrip(s1);
    printf("-%s-\n", s1);
}

// Expected output from your program:

// -Hello   World    -

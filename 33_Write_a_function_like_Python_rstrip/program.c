// Write a C function called py_rstrip() that removes spaces from the end
// of a string. This function modifies its parameter and should never be
// called with a constant value.

#include <stdio.h>
#include <string.h>

void py_rstrip(inp)
    char inp[];
{
  	int len = strlen(inp);

    while (len > 0 && inp[len - 1] == ' ') {
        len--;
    }
    inp[len] = '\0';
}


int main() {
    char s1[] = "   Hello   World    ";
    void py_rstrip();
    py_rstrip(s1);
    printf("-%s-\n", s1);
}

// Expected output from your program:

// -   Hello   World-

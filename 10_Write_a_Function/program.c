// Write a C function to implement this Python code:

// def mymult(a,b):
//     c = a * b
//     return c

int mymult(a, b)
	int a, b;
{
    return a * b;
}

#include <stdio.h>
int main() {
    int mymult();
    int retval;

    retval = mymult(6,7);
    printf("Answer: %d\n",retval);
}

// Expected output from your program:

// Answer: 42

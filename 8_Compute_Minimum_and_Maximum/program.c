// Write a C program to determine the minimum and maximum of a sequence of
// integer numbers on input, terminated by the string "done". The patterns
// for input and output should match the following Python application. Make
// sure that the input lines can be at least 1000 characters. Use a middle-tested
// while loop, gets() and atoi() to mimic the Python code below. See the lecture
// for guidance.

// maxval = None
// minval = None
// while True:
//     line = input()
//     line = line.strip()
//     if line == "done" : break
//     ival = int(line)
//     if ( maxval is None or ival > maxval) :
//         maxval = ival
//     if ( minval is None or ival < minval) :
//         minval = ival

// print('Maximum', maxval)
// print('Minimum', minval)

#include <stdio.h>
#include <string.h>
int main() {
    int first = 1;
    char line[1000];
    int ival, maxval, minval;
    while (gets(line) != NULL) {
        if (strcmp(line, "done") == 0) break;
        ival = atoi(line); if (first || ival > maxval) maxval = ival;
        if (first || ival < minval) minval = ival;
        first = 0;
    }
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}

//This will be provided as input to your program:

// 5
// 2
// 9
// done

// Expected output from your program:

// Maximum 9
// Minimum 2

// Write a C program to implement this Python program,
// using the fgets function instead of scanf.

// print('Enter line')
// line = input()
// print('Line:', line)

#include <stdio.h>

int main() {
    char name[1000];

    printf("Enter line\n");
    fgets(name, 1000, stdin);

    printf("Line: %s", name);

}

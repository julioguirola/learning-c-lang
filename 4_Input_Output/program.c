// Write a C program equivalent to this Python program:
// print('Enter name')
// name = input()
// print('Hello', name)

#include <stdio.h>

int main() {
    char name[100];

    printf("Enter name\n");
    scanf("%s", name);

    printf("Hello %s", name);

}

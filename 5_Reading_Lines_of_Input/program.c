// Write a C program equivalent to this Python program:

// print('Enter line')
// line = input()
// print('Line:', line)

#include <stdio.h>
int main() {
    printf("Enter line\n");
  	char line[1000];
  	scanf("%[^\n]1000s", line);

  	printf("Line: %s\n", line);
}

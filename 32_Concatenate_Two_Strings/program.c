// Write a C program to prompt for two strings and concatenate them as
// shown in in the Python code below. Use the functions strcpy and strcat
// from the string.h library in your code. Pre-allocate your character
// arrays large enought to handle up to 100 characters on input for each
// string (i.e. do not use malloc as we have not yet covered that yet).

// print('Enter two strings');
// first = input()
// second = input()
// print(first + " & " + second)

#include <stdio.h>
#include <string.h>
int main() {
  char result[100];
  char line[100];
  scanf("%s", line);
  strcat(result, line);
  strcat(result, " & ");
  scanf("%s", line);
  strcat(result, line);
  printf("Enter two strings\n");
  printf("%s", result);
}

// This will be provided as input to your program:

// Kernighan
// Ritchie

// Expected output from your program:

// Enter two strings
// Kernighan & Ritchie

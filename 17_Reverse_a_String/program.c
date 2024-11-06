// You should write a function called reverse(s) that
// reverses the characters in a string. Reverse the string in place.

#include <stdio.h>

void reverse(t)
char t[];
{
    char temp;
  	int len, max, min;
  	min = 0;
  	for (len = 0; t[len]; len++);
  	max = len - 1;
  	while (max > min) {
      temp = t[max];
      t[max] = t[min];
      t[min] = temp;
      max--;
      min++;
    }
}

/* copy s1 to s2; assume s2 big enough */
char *copy(s1, s2)
char s1[], s2[];
{
    int i;
    for(i=0;(s2[i] = s1[i]);i++);
    return s2;
}

int main() {
  char t[1000];
  char *copy();
  void reverse();
  copy("Hello world", t);
  printf("%s\n", t);
  reverse(t);
  printf("%s\n", t);
  reverse(copy("XY", t));
  printf("%s\n", t);
  reverse(copy("Even", t));
  printf("%s\n", t);
  reverse(copy("Odd", t));
  printf("%s\n", t);
  reverse(copy("civic", t));
  printf("%s\n", t);
}

// Expected output from your program:

// Hello world
// dlrow olleH
// YX
// nevE
// ddO
// civic

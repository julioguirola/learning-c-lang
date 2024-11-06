// You should write a function called expand(s, t) that
// copies the string s to t expanding newlines and tabs
// to '\n' and '\t' respectively. Use a switch statement
//  (it will be a short switch statement). You can assume
//  that the t variable contains enough space. Make sure
//  to properly terminate t with the end-of-string marker '\0'.

void expand(s, t)
char s[100], t[100];
{
  int i, j;
  for(i=0, j=0; s[i]; i++, j++) {
    switch (s[i]) {
      case '\t':
        t[j] = '\\';
        j++;
        t[j] = 't';
        break;
      case '\n':
        t[j] = '\\';
        j++;
        t[j] = 'n';
        break;
      default:
        t[j] = s[i];
    }
  }
  t[j] = '\0';
}

#include <stdio.h>
int main() {
  char t[1000];
  void expand();
  expand("Hello world", t);
  printf("%s\n", t);
  expand("Hello world\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\nHave a nice\tday\n", t);
  printf("%s\n", t);
}

// Expected output from your program:

// Hello world
// Hello world\n
// Hello\tworld\n
// Hello\tworld\nHave a nice\tday\n

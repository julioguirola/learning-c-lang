// Write a function itob(n, s) which converts the unsigned integer
// n into a binary (base 2) character representation in s. Write
// itoh, which converts an integer to hexadecimal representation.
// You can assume that the s variable contains enough space. Make sure
// to properly terminate s with the end-of-string marker '\0' before returning.

// You can use reverse(s) to reverse a string - make sure you pass a
// character array and not a string constant to reverse.

#include <stdio.h>
#include <string.h>

void itob(n, s)
int n;char s[1000];
{
    int i, resto;
  	for (i = 0; n; i++) {
    	resto = n % 2;
    	n = n / 2;
    	if (resto) {
          s[i] = 49;
        } else {
        	s[i] = 48;
        }
    }
    s[i] = '\0';

  	int f, g, len;
    char tmp;
    len = strlen(s);
    for(f=0, g=len-1;;f++,g--) {
        if (g<f) break;
        tmp = s[f];
        s[f] = s[g];
        s[g] = tmp;
    }

}
char singleH(n)
int n;
{
    switch (n) {
        case 10:
            return 'a';
        case 11:
            return 'b';
        case 12:
            return 'c';
        case 13:
            return 'd';
        case 14:
            return 'e';
        case 15:
            return 'f';
    }
    return n+48;
}
void itoh(n, s)
int n;
char s[1000];
{
    int i, resto;
  	for (i = 0; n; i++) {
    	resto = n % 16;
    	n = n / 16;
        s[i] = singleH(resto);
    }
    s[i] = '\0';

    int f, g, len;
    char tmp;
    len = strlen(s);
    for(f=0, g=len-1;;f++,g--) {
        if (g<f) break;
        tmp = s[f];
        s[f] = s[g];
        s[g] = tmp;
    }
}

int main() {
  char s[1000];
  void itob(), itoh(), reverse();

  itob(42,s);
  printf("42 in base-2 is %s\n", s);
  itoh(42,s);
  printf("42 in base-16 is %s\n", s);

  itob(16,s);
  printf("16 in base-2 is %s\n", s);
  itoh(16,s);
  printf("16 in base-16 is %s\n", s);

  itob(59,s);
  printf("59 in base-2 is %s\n", s);
  itoh(59,s);
  printf("59 in base-16 is %s\n", s);

  itob(100,s);
  printf("100 in base-2 is %s\n", s);
  itoh(100,s);
  printf("100 in base-16 is %s\n", s);

  itob(254,s);
  printf("254 in base-2 is %s\n", s);
  itoh(254,s);
  printf("254 in base-16 is %s\n", s);
}

void reverse(t)
char t[];
{
    int i, j, len;
    char tmp;
    len = strlen(t);
    for(i=0, j=len-1;;i++,j--) {
        if (j<i) break;
        tmp = t[i];
        t[i] = t[j];
        t[j] = tmp;
    }
    return;
}

// Expected output from your program:

// 42 in base-2 is 101010
// 42 in base-16 is 2a
// 16 in base-2 is 10000
// 16 in base-16 is 10
// 59 in base-2 is 111011
// 59 in base-16 is 3b
// 100 in base-2 is 1100100
// 100 in base-16 is 64
// 254 in base-2 is 11111110
// 254 in base-16 is fe

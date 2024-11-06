// You should write a function (no #include statements are needed)
// called htoi(str) that converts hexadecimal constant (base-16 0-9 and a-f)
// to an integer. There will not be a '0x' prefix (like in C) - just assume
// the input is a hex number. You should not use ctype.h and your code can
// assume the ASCII character set.

// Each time you run the program, the values you need to convert dc33b
// (base-16) to 901947 (base-10) may be different each time you run the code.

int potencia(int n, int e) {
    if (e == 0) return 1;
    return potencia(n, e - 1) * n;
}
int htoi(char s[]) {
    int len, i;
    int n = 0;
    for (len = 0; s[len]; len++);
    for (i = 0; s[i]; i++) {
        if (s[i] > '9' || s[i] < '0') {
            if (s[i] < 'a') {
                n += (s[i] - 55) * potencia(16, len - 1);
            } else {
                n += (s[i] - 87) * potencia(16, len - 1);
            }
        } else {
                n += (s[i] - 48) * potencia(16, len - 1);
        }
        len--;
    }

    return n;
}

#include <stdio.h>
int main() {
  printf("htoi('dc33b') = %d\n", htoi("dc33b"));
  printf("htoi('f') = %d\n", htoi("f"));
  printf("htoi('F0') = %d\n", htoi("F0"));
  printf("htoi('12fab') = %d\n", htoi("12fab"));
}

// Expected output from your program:

// htoi('dc33b') = 901947
// htoi('f') = 15
// htoi('F0') = 240
// htoi('12fab') = 77739

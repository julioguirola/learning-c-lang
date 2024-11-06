// Modify the temperature conversion program to print a heading
// above the table. Check the sample output for the required
// format of the heading.

#include <stdio.h>
int main() /* Fahrenheit-Celsius table */
{
  	printf("FAHR   CELSIUS\n");
  	printf("---------------\n");
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 40)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

// Expected output from your program:

// FAHR   CELSIUS
// ---------------
//    0  -17.8
//   40    4.4
//   80   26.7
//  120   48.9
//  160   71.1
//  200   93.3
//  240  115.6
//  280  137.8

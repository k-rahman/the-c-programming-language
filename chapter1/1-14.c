#include <stdio.h>

#define CHARSET 127 /* ASCII characters set */

int main()
{
    int c, i, j, chars_freqs[CHARSET - 32], ascii_charset[CHARSET -  32];

    // initialize ascii_charset starting from "! - 32" to "~ - 126"
    for (i = 0; i < CHARSET - 32; ++i)
        ascii_charset[i] = 32 + i;
    
    // initialize chars_freqs to 0
    for (i = 0; i < CHARSET - 32; ++i) 
        chars_freqs[i] = 0;

    while ((c = getchar()) != EOF) {
        ++chars_freqs[c - 32];
    }

    printf("\n\n----------------------------------------------\n");
    printf("Horizontal Histogram of Characters Frequencies\n");
    printf("----------------------------------------------\n");

    for (i = 0; i < CHARSET - 32; ++i) { /* not so elegant solution :/ */
        if (chars_freqs[i] > 0){
            printf("%c", ascii_charset[i]);
            printf(" |");
        }

        for (j = 0; j < chars_freqs[i]; ++j)
           printf("*");

        if (chars_freqs[i] > 0)
            printf("\n");
    }
    printf("\n");
}

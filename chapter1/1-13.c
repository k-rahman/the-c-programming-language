#include <stdio.h>

#define IN  1
#define OUT 0
#define SIZE  30 /*The longest non-technical word in major dictionaries is floccinaucinihilipilification at 29 letters*/

int main()
{
    int c, i, state, wlength, longest_word, highest_count, wlength_count[SIZE], row, col;

    // initialize wlength_count array
    for (i = 0; i < SIZE; ++i)
        wlength_count[i] = 0;
    
    longest_word = 0; // used in limiting the histogram output
    highest_count = 0; // used in vertical histogram
    wlength  = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            state = IN;
            ++wlength;
        }
        else if (state == IN) {
            state = OUT;
            ++wlength_count[wlength];
            if (wlength_count[wlength] > highest_count)
                highest_count = wlength_count[wlength];
            if (wlength > longest_word)
                longest_word = wlength;
            wlength = 0;
        }
    }

    printf("\n\n-------------------------------------\n");
    printf("Horizontal Histogram of Words Lengths\n");
    printf("-------------------------------------\n");

  /* row is the length of the word (intialized to 1, because length 0 isn't considered),
    cols are the count of that length in the input */
    for (row = 1; row <= longest_word; ++row) { 
        printf("%2d |", row);
        for (col = 0; col < wlength_count[row]; ++col)
            printf("= ");
        printf("\n");
    }

    printf("\n\n-----------------------------------\n");
    printf("Vertical Histogram of Words Lengths\n");
    printf("-----------------------------------\n");

  /* rows in vertical histogram are the count of the word length,
    col is the length of the word */
    for (row = highest_count; row > 0; --row) {
        for (col = 1; col <= longest_word; ++col) {
            if (wlength_count[col] >= row)
                printf(" || ");
            else
                printf("    "); 
        }
        printf("\n");
    }

    // print words lengths
    for (i = 1; i <= longest_word; ++i)
          printf(" -- ");

    printf("\n");

    for (i = 1; i <= longest_word; ++i)
          printf(" %2d ", i);

    printf("\n");
}

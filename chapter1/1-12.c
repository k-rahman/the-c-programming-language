#include <stdio.h>

int main()
{
    int c, prev_c;

    while ((c = getchar()) != EOF) {
        if ((c == ' ' && prev_c != ' ') || 
            (c == '\t' && prev_c != '\t') || 
            (c == '\n' && prev_c != '\n'))
            putchar('\n');
        else if (c != ' ' && c != '\t' && c != '\n')
            putchar(c);
        prev_c = c;
    }
}

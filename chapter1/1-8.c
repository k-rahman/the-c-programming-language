#include <stdio.h>

int main()
{
    int nb, nt, nl;

    nb = nt = nl = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    }
    printf("Number of blanks: %d\n", nb);
    printf("Number of tabs: %d\n", nt);
    printf("Number of newLines: %d\n", nl);
}

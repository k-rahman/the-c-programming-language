#include <stdio.h>

int main()
{
    int nb;

    nb = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (nb == 1)
            putchar(' ');
          
        if (c != ' ') {
            putchar(c); 
            nb = 0;
        }

        if (c == ' ')
            ++nb;
    }
}

// another solution is to store the previous char and check if it is blank
// if (c != ' ' || pre_c != ' ')
//    putchar(c);
// pre_c = c;
